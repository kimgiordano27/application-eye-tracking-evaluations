/*
FUNCTION_NAME: OVR.OpenVR.IVROverlay._IsActiveDashboardOverlay$$EndInvoke
ENTRY_POINT: 05628f8c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVROverlay__IsActiveDashboardOverlay__EndInvoke
               (long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7,long param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 unaff_x22;
  long unaff_x23;
  long unaff_x29;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(unaff_x29 + 0x9d8);
  if ((*(byte *)(unaff_x23 + 0xaa9) & 1) == 0) {
    FUN_02d965b8(System_Func<ulong,_bool>_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fb9d8);
    FUN_02d965b8(PTR_DAT_069fec88);
    FUN_02d965b8(System_Func<Vector2,_float>_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0dc58);
    *(undefined1 *)(unaff_x23 + 0xaa9) = 1;
  }
  lVar1 = FUN_02d966a4(*puVar3,5);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) != 0) {
      *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)System_Func<Vector2,_float>_TypeInfo;
      LeanTween__value();
      if (unaff_x19 == 0) goto LAB_05629168;
      uVar2 = FUN_055ff208();
      if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar1 + 0x28) = uVar2;
        LeanTween__value((undefined8 *)(lVar1 + 0x28),uVar2);
        if (2 < *(uint *)(lVar1 + 0x18)) {
          *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)PTR_DAT_069fec88;
          LeanTween__value();
          if (param_8 == 0) goto LAB_05629168;
          uVar2 = FUN_055fd4e0(param_8,0);
          if ((*(uint *)(lVar1 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar1 + 0x38) = uVar2;
            LeanTween__value((undefined8 *)(lVar1 + 0x38),uVar2);
            if (4 < *(uint *)(lVar1 + 0x18)) {
              *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)PTR_DAT_06a0dc58;
              LeanTween__value();
              uVar2 = FUN_0536dde4(lVar1,0);
              FUN_044266e0(param_1,uVar2,param_2,param_3,param_4,param_5,param_11._4_4_,param_12);
              *(long *)(param_1 + 0xa0) = param_8;
              LeanTween__value((long *)(param_1 + 0xa0),param_8);
              *(undefined8 *)(param_1 + 0xa8) = unaff_x22;
              *(undefined4 *)(param_1 + 0xb8) = (undefined4)param_11;
              LeanTween__value();
              *(long *)(param_1 + 0xb0) = unaff_x19;
              LeanTween__value((long *)(param_1 + 0xb0));
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
LAB_05629168:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


