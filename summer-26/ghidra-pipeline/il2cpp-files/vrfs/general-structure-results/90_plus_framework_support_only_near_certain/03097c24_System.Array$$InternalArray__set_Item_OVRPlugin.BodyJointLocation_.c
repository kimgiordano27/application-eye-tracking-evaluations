/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.BodyJointLocation>
ENTRY_POINT: 03097c24
PROGRAM: vrfs-libil2cpp.so
SCORE: 101
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


void System_Array__InternalArray__set_Item<OVRPlugin_BodyJointLocation>(void)

{
  ulong uVar1;
  long unaff_x19;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x21;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = FUN_0309736c();
  lVar2 = *(long *)(unaff_x19 + 0x108);
  if ((uVar1 & 1) == 0) {
    if (lVar2 == 0) goto System_Array__InternalArray__set_Item<OVRPlugin_Bone>;
    FUN_04f1d938(lVar2,0);
    fVar5 = 0.0;
  }
  else {
    if (lVar2 == 0) goto System_Array__InternalArray__set_Item<OVRPlugin_Bone>;
    fVar5 = *(float *)(unaff_x19 + 0x5c);
    fVar6 = *(float *)(unaff_x19 + 0xfc);
    FUN_04f1d938(lVar2,0);
    fVar5 = -(fVar5 + fVar6);
  }
  FUN_04f1d9c8(fVar5,lVar2,0);
  if (*(char *)(unaff_x19 + 0xf5) != '\0') {
    uVar3 = *(undefined8 *)(unaff_x19 + 0x48);
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar1 = FUN_051e0350(uVar3,0);
    if ((uVar1 & 1) != 0) {
      FUN_04f1d3d0(unaff_x19 + 0x118);
      lVar2 = *(long *)(unaff_x19 + 0x110);
      if (lVar2 != 0) {
        uVar4 = FUN_04f1d5e4(lVar2,0);
        FUN_04f1d674(uVar4,0,lVar2,0);
        lVar2 = *(long *)(unaff_x19 + 0x110);
        if (lVar2 != 0) {
          uVar4 = FUN_04f1d700(lVar2,0);
          FUN_04f1d790(uVar4,0x3f800000,lVar2,0);
          lVar2 = *(long *)(unaff_x19 + 0x110);
          if (lVar2 != 0) {
            uVar4 = FUN_04f1d81c(lVar2,0);
            FUN_04f1d8ac(uVar4,0,lVar2,0);
            uVar1 = FUN_03097310();
            lVar2 = *(long *)(unaff_x19 + 0x110);
            if (lVar2 != 0) {
              uVar4 = FUN_04f1d938(lVar2,0);
              if ((uVar1 & 1) == 0) {
                fVar5 = 0.0;
              }
              else {
                fVar5 = -(*(float *)(unaff_x19 + 0xf8) + *(float *)(unaff_x19 + 0x58));
              }
              FUN_04f1d9c8(uVar4,fVar5,lVar2,0);
              return;
            }
          }
        }
      }
System_Array__InternalArray__set_Item<OVRPlugin_Bone>:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
  }
  return;
}


