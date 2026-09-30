/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector4f>$$.ctor
ENTRY_POINT: 03e665f0
PROGRAM: vrfs-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4f>___ctor(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 in_w8;
  undefined1 in_w9;
  long unaff_x19;
  long *unaff_x20;
  
  *(undefined1 *)(unaff_x19 + 0x2c) = in_w9;
  *(undefined4 *)(unaff_x19 + 0x30) = in_w8;
  uVar2 = FUN_03321d18();
  *(bool *)(unaff_x19 + 0x34) = (uVar2 & 0xff) != 0;
  *(int *)(unaff_x19 + 0x38) = (int)(uVar2 >> 0x20);
  uVar2 = FUN_03321e1c(5,0);
  *(bool *)(unaff_x19 + 0x3c) = (uVar2 & 0xff) != 0;
  *(int *)(unaff_x19 + 0x40) = (int)(uVar2 >> 0x20);
  uVar2 = FUN_03321e1c(0xe,0);
  *(bool *)(unaff_x19 + 0x44) = (uVar2 & 0xff) != 0;
  *(int *)(unaff_x19 + 0x48) = (int)(uVar2 >> 0x20);
  uVar2 = FUN_03321d18(7,0);
  *(bool *)(unaff_x19 + 0x4c) = (uVar2 & 0xff) != 0;
  *(int *)(unaff_x19 + 0x50) = (int)(uVar2 >> 0x20);
  uVar2 = FUN_03321d18(8,0);
  *(bool *)(unaff_x19 + 0x54) = (uVar2 & 0xff) != 0;
  *(int *)(unaff_x19 + 0x58) = (int)(uVar2 >> 0x20);
  uVar2 = FUN_03321d18(9,0);
  *(bool *)(unaff_x19 + 0x5c) = (uVar2 & 0xff) != 0;
  *(int *)(unaff_x19 + 0x60) = (int)(uVar2 >> 0x20);
  uVar2 = FUN_03321d18(10,0);
  *(bool *)(unaff_x19 + 100) = (uVar2 & 0xff) != 0;
  *(int *)(unaff_x19 + 0x68) = (int)(uVar2 >> 0x20);
  uVar2 = FUN_03321d18(0xb,0);
  *(bool *)(unaff_x19 + 0x6c) = (uVar2 & 0xff) != 0;
  *(int *)(unaff_x19 + 0x70) = (int)(uVar2 >> 0x20);
  uVar2 = FUN_03321e1c(0xc,0);
  *(bool *)(unaff_x19 + 0x74) = (uVar2 & 0xff) != 0;
  *(int *)(unaff_x19 + 0x78) = (int)(uVar2 >> 0x20);
  uVar3 = FUN_03321e1c(0xd,0);
  uVar2 = 0;
  *(bool *)(unaff_x19 + 0x7c) = (uVar3 & 0xff) != 0;
  *(int *)(unaff_x19 + 0x80) = (int)(uVar3 >> 0x20);
  do {
    lVar4 = *unaff_x20;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar4 = *unaff_x20;
    }
    if ((long)*(int *)(*(long *)(lVar4 + 0xb8) + 0x18) <= (long)uVar2) {
      return;
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar3 = FUN_03321d18(0x20,0);
    lVar4 = *(long *)(unaff_x19 + 0x88);
    if (lVar4 == 0) {
LAB_03e667cc:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar2) {
LAB_03e667d0:
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    *(bool *)(lVar4 + uVar2 + 0x20) = (uVar3 & 0xff) != 0;
    lVar4 = *(long *)(unaff_x19 + 0x90);
    if (lVar4 == 0) goto LAB_03e667cc;
    if (*(uint *)(lVar4 + 0x18) <= uVar2) goto LAB_03e667d0;
    lVar1 = uVar2 * 4;
    uVar2 = uVar2 + 1;
    *(int *)(lVar4 + lVar1 + 0x20) = (int)(uVar3 >> 0x20);
  } while( true );
}


