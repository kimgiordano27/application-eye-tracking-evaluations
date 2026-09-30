/*
FUNCTION_NAME: System.Comparison<OVRPassthroughLayer.SerializedSurfaceGeometry>$$Invoke
ENTRY_POINT: 04a66944
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void System_Comparison<OVRPassthroughLayer_SerializedSurfaceGeometry>__Invoke
               (undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  undefined4 uStack000000000000001c;
  
  if (*(long *)(*unaff_x22 + 0x40) != *(long *)(param_2 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96be0();
  }
  puVar6 = (undefined4 *)thunk_FUN_02dd328c();
  lVar7 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *puVar6;
  uVar2 = puVar6[1];
  uVar3 = puVar6[2];
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02dcfd18();
  }
  thunk_FUN_02dd2d7c(**(undefined8 **)(lVar7 + 0xc0));
  lVar7 = *(long *)(unaff_x20 + 0x20);
  uStack000000000000001c = uVar1;
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02dcfd18();
  }
  thunk_FUN_02dd2d7c(**(undefined8 **)(lVar7 + 0xc0),&stack0x0000001c);
  puVar4 = PTR_DAT_06a10d40;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar7 = *unaff_x19;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06a10d40) {
        puVar8 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_04a66a28;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar8 = (undefined8 *)FUN_02dd004c();
LAB_04a66a28:
  iVar5 = (*(code *)*puVar8)();
  if (iVar5 == 0) {
    lVar7 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02dcfd18();
    }
    thunk_FUN_02dd2d7c(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x10));
    lVar7 = *(long *)(unaff_x20 + 0x20);
    uStack000000000000001c = uVar2;
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02dcfd18();
    }
    thunk_FUN_02dd2d7c(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x10),&stack0x0000001c);
    lVar7 = *unaff_x19;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto System_Comparison<OVRSceneManager_Metrics>__Invoke;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar8 = (undefined8 *)FUN_02dd004c();
System_Comparison<OVRSceneManager_Metrics>__Invoke:
    iVar5 = (*(code *)*puVar8)();
    if (iVar5 == 0) {
      lVar7 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02dcfd18();
      }
      thunk_FUN_02dd2d7c(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18));
      lVar7 = *(long *)(unaff_x20 + 0x20);
      uStack000000000000001c = uVar3;
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02dcfd18();
      }
      thunk_FUN_02dd2d7c(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18),&stack0x0000001c);
      lVar7 = *unaff_x19;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
            puVar8 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_04a66ba8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar8 = (undefined8 *)FUN_02dd004c();
LAB_04a66ba8:
      (*(code *)*puVar8)();
    }
  }
  return;
}


