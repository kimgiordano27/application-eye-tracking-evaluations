/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDictionaryConverter$$AddItemToDictionary
ENTRY_POINT: 03e8bef0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_VisualScripting_FullSerializer_fsDictionaryConverter__AddItemToDictionary(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long unaff_x19;
  undefined8 uVar7;
  long *unaff_x21;
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
  thunk_FUN_01efb3a4(PTR_DAT_0457a098);
  thunk_FUN_01efb3a4(PTR_DAT_0457b080);
  *(undefined1 *)(unaff_x19 + 0xa60) = 1;
  lVar4 = *unaff_x21;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar4 = *unaff_x21;
  }
  puVar3 = PTR_DAT_0457ae58;
  puVar2 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  if (**(long **)(lVar4 + 0xb8) != 0) {
    if (*(int *)(**(long **)(lVar4 + 0xb8) + 0x18) == 0) {
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0403ea2c(*(undefined8 *)PTR_DAT_0457b080,0);
      return;
    }
    iVar6 = 0;
    while( true ) {
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar4 = *unaff_x21;
      }
      lVar5 = **(long **)(lVar4 + 0xb8);
      if (lVar5 == 0) break;
      iVar1 = *(int *)(lVar5 + 0x18);
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar5 = **(long **)(*unaff_x21 + 0xb8);
        if (lVar5 == 0) break;
      }
      if (iVar1 <= iVar6) {
        iVar6 = *(int *)(lVar5 + 0x18);
        *(undefined4 *)(lVar5 + 0x18) = 0;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (0 < iVar6) {
          FUN_0358d1e4(*(undefined8 *)(lVar5 + 0x10),0,iVar6,0);
          return;
        }
        return;
      }
      lVar4 = FUN_030f28e4(lVar5,iVar6,*(undefined8 *)puVar3);
      if (lVar4 == 0) break;
      uVar7 = *(undefined8 *)(lVar4 + 0x18);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar2);
      }
      FUN_0407718c(uVar7,0);
      lVar4 = *unaff_x21;
      iVar6 = iVar6 + 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


