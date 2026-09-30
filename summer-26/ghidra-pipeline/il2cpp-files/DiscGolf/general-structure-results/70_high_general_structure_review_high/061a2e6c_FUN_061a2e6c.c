/*
FUNCTION_NAME: FUN_061a2e6c
ENTRY_POINT: 061a2e6c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_061a2e6c(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x19;
  long *plVar12;
  long *unaff_x21;
  long *plVar13;
  int iVar14;
  long *plVar15;
  
  plVar12 = (long *)(unaff_x19 + 200);
  if (*plVar12 == 0) {
                    /* try { // try from 061a2e90 to 062a2eb7 has its CatchHandler @ 061a2ff8 */
    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_set_historyDepth__
                              );
    FUN_04f93df4(lVar8,*(undefined8 *)
                        Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_RecordStateChange__
                );
    *plVar12 = lVar8;
    LeanTween__value(plVar12,lVar8);
  }
  else {
    FUN_04f94d1c(*plVar12,*(undefined8 *)
                           Method_UnityEngine_InputSystem_LowLevel_InputStateHistory__ctor__);
  }
  puVar6 = Method_UnityEngine_InputSystem_InputSystem_AddDevice<Touchscreen>__;
  puVar5 = Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_RecordStateChange__;
  puVar4 = Method_Unity_Hierarchy_HierarchyViewModel_HasAllFlags__;
  puVar3 = Method_Unity_Collections_NativeReference<SecureNetworkProtocolParameter>_Dispose__;
  puVar2 = Method_Unity_Collections_NativeReference<RelayNetworkParameter>_Dispose__;
  lVar8 = *(long *)(unaff_x19 + 0xc0);
  if (lVar8 != 0) {
    iVar14 = 0;
    do {
                    /* try { // try from 061a2ef4 to 062a2f1b has its CatchHandler @ 061a2ff4 */
      if (*(int *)(lVar8 + 0x18) <= iVar14) {
        plVar13 = (long *)(unaff_x19 + 0x98);
        if (*plVar13 == 0) {
          lVar8 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fece8);
                    /* try { // try from 061a2fd0 to 062a2fd3 has its CatchHandler @ 061a2ff0 */
                    /* try { // try from 061a2fd4 to 062a2fd7 has its CatchHandler @ 061a2fec */
                    /* try { // try from 061a2fd8 to 062a3013 has its CatchHandler @ 061a2918 */
          FUN_04d8b6bc(lVar8,*(undefined8 *)PTR_DAT_069fecf0);
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 061a2f28 with catch @ 061a2fe8
                        */
          *plVar13 = lVar8;
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 061a2fd4 with catch @ 061a2fec
                        */
          LeanTween__value(plVar13,lVar8);
        }
        else {
          FUN_04d8c5c4(*plVar13,*(undefined8 *)
                                 Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SliderDirection>__ctor__
                      );
        }
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 061a2fd0 with catch @ 061a2ff0
                        */
        puVar2 = Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_set_Item__;
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 061a2ef4 with catch @ 061a2ff4
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 061a2e90 with catch @ 061a2ff8
                        */
        plVar15 = (long *)(unaff_x19 + 0xb8);
        if (*plVar15 == 0) {
                    /* catch() { ... } // from try @ 061a3014 with catch @ 061a3020 */
                    /* try { // try from 061a3024 to 062a302b has its CatchHandler @ 061a3034 */
          lVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                      Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_set_extraMemoryPerRecord__
                                    );
                    /* try { // try from 061a302c to 062a3037 has its CatchHandler @ 061a2918 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 061a3024 with catch @ 061a3034
                        */
          FUN_04f93df4(lVar8,*(undefined8 *)
                              Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_get_Item__);
          *plVar15 = lVar8;
          LeanTween__value(plVar15,lVar8);
        }
        else {
          FUN_04f94d1c(*plVar15,*(undefined8 *)
                                 Method_UnityEngine_InputSystem_LowLevel_InputStateHistory__ctor__);
                    /* try { // try from 061a3014 to 062a3017 has its CatchHandler @ 061a3020 */
        }
        lVar8 = *(long *)(unaff_x19 + 0xb0);
        if (lVar8 != 0) {
          iVar14 = 0;
          goto LAB_061a305c;
        }
        break;
      }
      lVar8 = FUN_0400ff1c(lVar8,iVar14,*(undefined8 *)puVar6);
      if (lVar8 == 0) break;
      uVar7 = FUN_063ed08c(lVar8,0);
      if (*unaff_x21 == 0) break;
                    /* try { // try from 061a2f28 to 062a2f37 has its CatchHandler @ 061a2fe8 */
      uVar9 = FUN_04f7fa44(*unaff_x21,uVar7,*(undefined8 *)puVar3);
                    /* try { // try from 061a2f38 to 062a2fcf has its CatchHandler @ 061a2918 */
      if ((uVar9 & 1) == 0) {
        if (*unaff_x21 == 0) break;
        FUN_04f7f858(*unaff_x21,uVar7,iVar14,*(undefined8 *)puVar2);
      }
      if (*plVar12 == 0) break;
      uVar9 = System_Array_EmptyInternalEnumerator<KeyValuePair<Int64Enum,_BytesSentAndReceived>>__get_Current
                        (*plVar12,uVar7,*(undefined8 *)puVar5);
      if ((uVar9 & 1) == 0) {
        if (*plVar12 == 0) break;
        FUN_04f94b94(*plVar12,uVar7,lVar8,
                     *(undefined8 *)
                      Method_UnityEngine_InputSystem_LowLevel_InputStateBuffers_GetDoubleBuffersFor__
                    );
      }
      lVar8 = *(long *)(unaff_x19 + 0xc0);
      iVar14 = iVar14 + 1;
    } while (lVar8 != 0);
  }
  goto LAB_061a31c8;
LAB_061a305c:
  do {
    if (*(int *)(lVar8 + 0x18) <= iVar14) {
      *(undefined1 *)(unaff_x19 + 0xe0) = 0;
      return;
    }
    lVar8 = FUN_0400ff1c(lVar8,iVar14,*(undefined8 *)puVar4);
    if (lVar8 != 0) {
      if (*plVar12 == 0) break;
      uVar7 = *(undefined4 *)(lVar8 + 0x28);
      uVar9 = System_Array_EmptyInternalEnumerator<KeyValuePair<Int64Enum,_BytesSentAndReceived>>__get_Current
                        (*plVar12,uVar7,*(undefined8 *)puVar5);
      if ((uVar9 & 1) != 0) {
        if (*plVar12 == 0) break;
        uVar10 = FUN_04f94af4(*plVar12,uVar7,*(undefined8 *)puVar2);
        *(undefined8 *)(lVar8 + 0x20) = uVar10;
        LeanTween__value();
        *(long *)(lVar8 + 0x18) = unaff_x19;
        LeanTween__value();
        if ((*(long *)(unaff_x19 + 0xb0) == 0) ||
           (lVar11 = FUN_0400ff1c(*(long *)(unaff_x19 + 0xb0),iVar14,*(undefined8 *)puVar4),
           lVar11 == 0)) break;
        uVar10 = *(undefined8 *)(lVar11 + 0x30);
        if (*(int *)(*(long *)Method_System_Net_HttpWebRequest_set_Method__ + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar7 = FUN_061ace10(uVar10,0);
        if (*plVar13 == 0) break;
        uVar9 = FUN_04d8c630(*plVar13,uVar7,
                             *(undefined8 *)
                              Method_Oculus_Platform_Message<AppDownloadProgressResult>__ctor__);
        if ((uVar9 & 1) == 0) {
          if (*plVar13 == 0) break;
          FUN_04d8c444(*plVar13,uVar7,iVar14,*(undefined8 *)PTR_DAT_069fecf8);
        }
        if ((*(long *)(unaff_x19 + 0xb0) == 0) ||
           (lVar11 = FUN_0400ff1c(*(long *)(unaff_x19 + 0xb0),iVar14,*(undefined8 *)puVar4),
           lVar11 == 0)) break;
        iVar1 = *(int *)(lVar11 + 0x14);
        if (iVar1 != 0xfffe) {
          if (*plVar15 == 0) break;
          uVar9 = System_Array_EmptyInternalEnumerator<KeyValuePair<Int64Enum,_BytesSentAndReceived>>__get_Current
                            (*plVar15,iVar1,
                             *(undefined8 *)
                              Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_GetRecord__)
          ;
          if ((uVar9 & 1) == 0) {
            if (*plVar15 == 0) break;
            FUN_04f94b94(*plVar15,iVar1,lVar8,
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_LowLevel_InputStateBuffers_NextDeviceOffset__
                        );
          }
        }
      }
    }
    lVar8 = *(long *)(unaff_x19 + 0xb0);
    iVar14 = iVar14 + 1;
  } while (lVar8 != 0);
LAB_061a31c8:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


