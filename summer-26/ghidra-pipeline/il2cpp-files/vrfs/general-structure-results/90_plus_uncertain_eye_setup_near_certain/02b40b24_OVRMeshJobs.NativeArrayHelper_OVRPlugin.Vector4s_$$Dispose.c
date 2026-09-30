/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector4s>$$Dispose
ENTRY_POINT: 02b40b24
PROGRAM: vrfs-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__Dispose(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *plVar6;
  long *unaff_x22;
  code *pcVar7;
  
code_r0x02b40b24:
  puVar1 = (undefined8 *)FUN_015c2a80(unaff_x21,param_2,0);
  do {
    uVar2 = (*(code *)*puVar1)(unaff_x21,puVar1[1]);
    if ((uVar2 & 1) == 0) {
      if (unaff_x19 != (long *)0x0) {
        (**(code **)(*unaff_x19 + 0x1f8))();
        return 0;
      }
      goto LAB_02b40cb4;
    }
    plVar6 = (long *)unaff_x19[7];
    if (plVar6 == (long *)0x0) goto LAB_02b40cb4;
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_015c2790(lVar3);
    }
    lVar4 = *plVar6;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar3) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_02b40bc0;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_015c2a80(plVar6,lVar3,0);
LAB_02b40bc0:
    (*(code *)*puVar1)(&stack0x000002a0,plVar6,puVar1[1]);
    memcpy(&stack0x000003f0,&stack0x000002a0,0x150);
    lVar3 = unaff_x19[5];
    if (lVar3 == 0) {
LAB_02b40c20:
      lVar3 = unaff_x19[6];
      memcpy(&stack0x000002a0,&stack0x000003f0,0x150);
      if (lVar3 != 0) {
        pcVar7 = *(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 8);
        memcpy(&stack0x00000000,&stack0x000002a0,0x150);
        lVar3 = (*pcVar7)(lVar3);
        unaff_x19[3] = lVar3;
        thunk_FUN_01656ef8(unaff_x19 + 3,lVar3);
        return 1;
      }
LAB_02b40cb4:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    lVar4 = *(long *)(unaff_x20 + 0x20);
    pcVar7 = *(code **)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x50) + 8);
    memcpy(&stack0x00000150,&stack0x000003f0,0x150);
    uVar2 = (*pcVar7)(lVar3,&stack0x00000150,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x50));
    if ((uVar2 & 1) != 0) goto LAB_02b40c20;
    unaff_x21 = (long *)unaff_x19[7];
    if (unaff_x21 == (long *)0x0) goto LAB_02b40cb4;
    lVar3 = *unaff_x21;
    param_2 = *unaff_x22;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar2 == 0) goto code_r0x02b40b24;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    while (*(long *)(piVar5 + -2) != param_2) {
      uVar2 = uVar2 - 1;
      piVar5 = piVar5 + 4;
      if (uVar2 == 0) goto code_r0x02b40b24;
    }
    puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
  } while( true );
}


