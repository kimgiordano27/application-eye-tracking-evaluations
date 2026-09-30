/*
FUNCTION_NAME: FUN_0522e64c
ENTRY_POINT: 0522e64c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0522e64c(undefined8 param_1,long *param_2,long *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if ((DAT_06bba85a & 1) == 0) {
    FUN_02f08768(Unity_Collections_NativeParallelHashMap<int,_BatchMeshID>_TypeInfo);
    FUN_02f08768(Oculus_Interaction_MAction<HandGrabInteractor>_TypeInfo);
    FUN_02f08768(
                System_Collections_Generic_List<XRInteractionGroup_GroupMemberAndOverridesPair>_TypeInfo
                );
    FUN_02f08768(Oculus_Interaction_MAction<TeleportInteractable>_TypeInfo);
    FUN_02f08768(PTR_DAT_067cde88);
    FUN_02f08768(OVRTask<List<bool>>_TypeInfo);
    FUN_02f08768(PTR_DAT_067cab38);
    FUN_02f08768(OVRTask<List<OVRPlugin_Result>>_TypeInfo);
    DAT_06bba85a = 1;
  }
  puVar5 = Unity_Collections_NativeParallelHashMap<int,_BatchMeshID>_TypeInfo;
  puVar4 = Oculus_Interaction_MAction<TeleportInteractable>_TypeInfo;
  if (param_3 != (long *)0x0) {
    lVar8 = *param_3;
    uVar11 = *(undefined8 *)OVRTask<List<bool>>_TypeInfo;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    uVar12 = *(undefined8 *)Oculus_Interaction_MAction<TeleportInteractable>_TypeInfo;
    uVar13 = *(undefined8 *)PTR_DAT_067cab38;
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Unity_Collections_NativeParallelHashMap<int,_BatchMeshID>_TypeInfo) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0xb) * 0x10 + 0x138);
          goto LAB_0522e75c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_02f421d0(param_3,*(long *)
                                   Unity_Collections_NativeParallelHashMap<int,_BatchMeshID>_TypeInfo
                          ,0xb);
LAB_0522e75c:
    uVar11 = (*(code *)*puVar6)(param_3,uVar11,uVar12,uVar13,puVar6[1]);
    puVar3 = Oculus_Interaction_MAction<HandGrabInteractor>_TypeInfo;
    puVar2 = 
    System_Collections_Generic_List<XRInteractionGroup_GroupMemberAndOverridesPair>_TypeInfo;
    if (param_2 != (long *)0x0) {
      lVar8 = *param_2;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Oculus_Interaction_MAction<HandGrabInteractor>_TypeInfo) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0522e7d8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_02f421d0(param_2,*(long *)Oculus_Interaction_MAction<HandGrabInteractor>_TypeInfo
                            ,0);
LAB_0522e7d8:
      (*(code *)*puVar6)(param_2,uVar11,puVar6[1]);
      lVar8 = *param_2;
      bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
      if ((bVar1 <= *(byte *)(lVar8 + 0x130)) &&
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar2)) {
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        lVar7 = *(long *)puVar3;
        uVar11 = *(undefined8 *)puVar4;
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar7) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_0522e864;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_02f421d0(param_2,lVar7,1);
LAB_0522e864:
        lVar8 = (*(code *)*puVar6)(param_2,uVar11,puVar6[1]);
        if (lVar8 == 0) {
          lVar8 = *param_3;
          uVar13 = *(undefined8 *)puVar4;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          uVar11 = *(undefined8 *)OVRTask<List<OVRPlugin_Result>>_TypeInfo;
          uVar12 = *(undefined8 *)PTR_DAT_067cde88;
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar5) {
                puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0xb) * 0x10 + 0x138);
                goto LAB_0522e8fc;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar6 = (undefined8 *)FUN_02f421d0(param_3,*(long *)puVar5,0xb);
LAB_0522e8fc:
          uVar11 = (*(code *)*puVar6)(param_3,uVar11,uVar12,uVar13,puVar6[1]);
          lVar7 = *param_2;
          lVar8 = *(long *)puVar3;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar8) {
                puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_0522e964;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar6 = (undefined8 *)FUN_02f421d0(param_2,lVar8,0);
LAB_0522e964:
                    /* WARNING: Could not recover jumptable at 0x0522e984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar6)(param_2,uVar11,puVar6[1]);
          return;
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


