/*
FUNCTION_NAME: OVRPlugin$$get_rotation
ENTRY_POINT: 02c18f20
PROGRAM: sharks-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__get_rotation(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_017fc350(*(undefined8 *)(param_1 + 0xc78));
  *(undefined1 *)(unaff_x21 + 0xeb2) = 1;
  if (unaff_x20 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_037f90f0 + 0x130);
    if ((bVar1 <= *(byte *)(*unaff_x20 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_037f90f0)
       ) {
      if (unaff_x20 == (long *)0x0) {
LAB_02c190a0:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      if (unaff_x20[4] == unaff_x19[4]) {
        uVar2 = (**(code **)(*unaff_x20 + 0x1a8))(unaff_x20,*(undefined8 *)(*unaff_x20 + 0x1b0));
        uVar3 = (**(code **)(*unaff_x19 + 0x1a8))();
        uVar4 = FUN_02b0f554(uVar2,uVar3,0);
        if ((uVar4 & 1) != 0) {
          lVar5 = unaff_x19[0xd];
          if (unaff_x20[0xd] == 0) {
            if (lVar5 == 0) {
              return 1;
            }
            uVar2 = *(undefined8 *)(lVar5 + 0x10);
            if (*(int *)(*(long *)PTR_DAT_037f2c78 + 0xe0) == 0) {
              thunk_FUN_01843fdc();
            }
          }
          else {
            uVar2 = *(undefined8 *)(unaff_x20[0xd] + 0x10);
            if (lVar5 != 0) {
              uVar3 = *(undefined8 *)(lVar5 + 0x10);
              if (*(int *)(*(long *)PTR_DAT_037f2c78 + 0xe0) == 0) {
                thunk_FUN_01843fdc();
              }
              uVar4 = FUN_02be66d0(uVar2,uVar3,0);
              if ((uVar4 & 1) == 0) {
                return 0;
              }
              if ((unaff_x20[0xd] != 0) && (unaff_x19[0xd] != 0)) {
                uVar2 = thunk_FUN_02a4fb2c(*(undefined8 *)(unaff_x20[0xd] + 0x18),
                                           *(undefined8 *)(unaff_x19[0xd] + 0x18),0);
                return uVar2;
              }
              goto LAB_02c190a0;
            }
            if (*(int *)(*(long *)PTR_DAT_037f2c78 + 0xe0) == 0) {
              thunk_FUN_01843fdc();
            }
          }
          uVar2 = FUN_02be66d0(uVar2,0,0);
          return uVar2;
        }
      }
    }
  }
  return 0;
}


