/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsBaseConverter$$CheckKey
ENTRY_POINT: 03e8beb0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_VisualScripting_FullSerializer_fsBaseConverter__CheckKey(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  
  puVar3 = PTR_DAT_0457a098;
  if ((DAT_0483aa60 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(PTR_DAT_0457b078);
    thunk_FUN_01efb3a4(PTR_DAT_0457ae50);
    thunk_FUN_01efb3a4(PTR_DAT_0457ae58);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(PTR_DAT_0457a098);
    thunk_FUN_01efb3a4(PTR_DAT_0457b080);
    DAT_0483aa60 = 1;
  }
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar5 = *(long *)puVar3;
  }
  puVar4 = PTR_DAT_0457ae58;
  puVar2 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  if (**(long **)(lVar5 + 0xb8) != 0) {
    if (*(int *)(**(long **)(lVar5 + 0xb8) + 0x18) == 0) {
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0403ea2c(*(undefined8 *)PTR_DAT_0457b080,0);
      return;
    }
    iVar7 = 0;
    while( true ) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar5 = *(long *)puVar3;
      }
      lVar6 = **(long **)(lVar5 + 0xb8);
      if (lVar6 == 0) break;
      iVar1 = *(int *)(lVar6 + 0x18);
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar6 = **(long **)(*(long *)puVar3 + 0xb8);
        if (lVar6 == 0) break;
      }
      if (iVar1 <= iVar7) {
        iVar7 = *(int *)(lVar6 + 0x18);
        *(undefined4 *)(lVar6 + 0x18) = 0;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (0 < iVar7) {
          FUN_0358d1e4(*(undefined8 *)(lVar6 + 0x10),0,iVar7,0);
          return;
        }
        return;
      }
      lVar5 = FUN_030f28e4(lVar6,iVar7,*(undefined8 *)puVar4);
      if (lVar5 == 0) break;
      uVar8 = *(undefined8 *)(lVar5 + 0x18);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar2);
      }
      FUN_0407718c(uVar8,0);
      lVar5 = *(long *)puVar3;
      iVar7 = iVar7 + 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


