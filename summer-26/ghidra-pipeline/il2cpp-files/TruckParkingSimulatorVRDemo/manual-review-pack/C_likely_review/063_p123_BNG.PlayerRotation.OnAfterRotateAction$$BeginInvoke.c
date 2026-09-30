/*
FUNCTION_NAME: BNG.PlayerRotation.OnAfterRotateAction$$BeginInvoke
ENTRY_POINT: 012dcde4
PROGRAM: TruckParkingSimulatorVRDemo-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8 * BNG_PlayerRotation_OnAfterRotateAction__BeginInvoke(long param_1)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  char *in_x9;
  uint in_w10;
  long *unaff_x19;
  undefined8 unaff_x20;
  void *pvVar5;
  
  if ((((((in_w10 - 0x30 < 10) || ((in_w10 & 0xffffffdf) - 0x41 < 6)) &&
        ((*(byte *)(param_1 + 4) - 0x30 < 10 || ((*(byte *)(param_1 + 4) & 0xffffffdf) - 0x41 < 6)))
        ) && ((*(byte *)(param_1 + 5) - 0x30 < 10 ||
              ((*(byte *)(param_1 + 5) & 0xffffffdf) - 0x41 < 6)))) &&
      ((*(byte *)(param_1 + 6) - 0x30 < 10 || ((*(byte *)(param_1 + 6) & 0xffffffdf) - 0x41 < 6))))
     && ((((*(byte *)(param_1 + 7) - 0x30 < 10 || ((*(byte *)(param_1 + 7) & 0xffffffdf) - 0x41 < 6)
           ) && ((*(byte *)(param_1 + 8) - 0x30 < 10 ||
                 ((*(byte *)(param_1 + 8) & 0xffffffdf) - 0x41 < 6)))) &&
         ((*(byte *)(param_1 + 9) - 0x30 < 10 || ((*(byte *)(param_1 + 9) & 0xffffffdf) - 0x41 < 6))
         )))) {
    pcVar1 = (char *)(param_1 + 10);
    *unaff_x19 = (long)pcVar1;
    if ((pcVar1 != in_x9) && (*pcVar1 == 'E')) {
      pvVar5 = (void *)unaff_x19[0x266];
      *unaff_x19 = param_1 + 0xb;
      lVar4 = *(long *)((long)pvVar5 + 8);
      puVar2 = pvVar5;
      if (0xfef < lVar4 + 0x20U) {
        puVar2 = malloc(0x1000);
        if (puVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          BNG_InputBridge__getFeatureUsage();
        }
        lVar4 = 0;
        *puVar2 = pvVar5;
        puVar2[1] = 0;
        unaff_x19[0x266] = (long)puVar2;
      }
      *(long *)((long)puVar2 + 8) = lVar4 + 0x20;
      puVar3 = (undefined8 *)((long)puVar2 + lVar4 + 0x10);
      *puVar3 = &PTR_FUN_02ab4420;
      *(undefined4 *)((long)puVar2 + lVar4 + 0x18) = 0x1010146;
      *(undefined8 *)((long)puVar2 + lVar4 + 0x20) = unaff_x20;
      *(char **)((long)puVar2 + lVar4 + 0x28) = pcVar1;
      return puVar3;
    }
  }
  return (undefined8 *)0x0;
}


