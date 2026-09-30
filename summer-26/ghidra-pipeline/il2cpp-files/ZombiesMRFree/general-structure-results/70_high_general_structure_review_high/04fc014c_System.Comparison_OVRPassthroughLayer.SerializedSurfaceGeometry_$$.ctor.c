/*
FUNCTION_NAME: System.Comparison<OVRPassthroughLayer.SerializedSurfaceGeometry>$$.ctor
ENTRY_POINT: 04fc014c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


undefined8
System_Comparison<OVRPassthroughLayer_SerializedSurfaceGeometry>___ctor
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  long unaff_x20;
  long *plVar5;
  long *unaff_x21;
  undefined8 uVar6;
  long *unaff_x22;
  code *pcVar7;
  undefined4 uVar8;
  
  do {
    lVar2 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == param_4) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_04fc0198;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02feb5b8(unaff_x21,param_4,0);
LAB_04fc0198:
    (*(code *)*puVar1)(&stack0x00000098,unaff_x21,puVar1[1]);
    memcpy(&stack0x00000050,&stack0x00000098,0x48);
    lVar2 = unaff_x19[6];
    if (lVar2 == 0) {
System_Comparison<OVRPassthroughLayer_SerializedSurfaceGeometry>__Invoke:
      lVar2 = unaff_x19[7];
      memcpy(&stack0x00000008,&stack0x00000050,0x48);
      if (lVar2 != 0) {
        pcVar7 = *(code **)(lVar2 + 0x18);
        uVar6 = *(undefined8 *)(lVar2 + 0x40);
        memcpy(&stack0x00000098,&stack0x00000008,0x48);
        uVar8 = (*pcVar7)(uVar6,&stack0x00000098,*(undefined8 *)(lVar2 + 0x28));
        *(undefined4 *)(unaff_x19 + 3) = uVar8;
        *(undefined4 *)((long)unaff_x19 + 0x1c) = param_2;
        *(undefined4 *)(unaff_x19 + 4) = param_3;
        return 1;
      }
LAB_04fc026c:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    pcVar7 = *(code **)(lVar2 + 0x18);
    uVar6 = *(undefined8 *)(lVar2 + 0x40);
    memcpy(&stack0x00000098,&stack0x00000050,0x48);
    uVar3 = (*pcVar7)(uVar6,&stack0x00000098,*(undefined8 *)(lVar2 + 0x28));
    if ((uVar3 & 1) != 0)
    goto System_Comparison<OVRPassthroughLayer_SerializedSurfaceGeometry>__Invoke;
    plVar5 = (long *)unaff_x19[8];
    if (plVar5 == (long *)0x0) goto LAB_04fc026c;
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_04fc0118;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02feb5b8(plVar5,*unaff_x22,0);
LAB_04fc0118:
    uVar3 = (*(code *)*puVar1)(plVar5,puVar1[1]);
    if ((uVar3 & 1) == 0) {
      if (unaff_x19 != (long *)0x0) {
        (**(code **)(*unaff_x19 + 0x1f8))();
        return 0;
      }
      goto LAB_04fc026c;
    }
    unaff_x21 = (long *)unaff_x19[8];
    if (unaff_x21 == (long *)0x0) goto LAB_04fc026c;
    param_4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40);
    if ((*(byte *)(param_4 + 0x135) & 1) == 0) {
      param_4 = FUN_02feb2c4(param_4);
    }
  } while( true );
}


