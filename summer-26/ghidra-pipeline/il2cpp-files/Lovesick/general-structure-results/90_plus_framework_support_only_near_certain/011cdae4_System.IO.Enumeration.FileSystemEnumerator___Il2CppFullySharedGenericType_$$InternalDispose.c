/*
FUNCTION_NAME: System.IO.Enumeration.FileSystemEnumerator<__Il2CppFullySharedGenericType>$$InternalDispose
ENTRY_POINT: 011cdae4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_3;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;negative_system_io_serialization_or_json_helper_without_gaze_flow;functionality_gaze_interaction_hits_2
*/


long System_IO_Enumeration_FileSystemEnumerator<__Il2CppFullySharedGenericType>__InternalDispose
               (ulong param_1,long param_2)

{
  void *pvVar1;
  ushort uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  char *pcVar9;
  short *psVar10;
  undefined8 *puVar11;
  long lVar12;
  long *unaff_x19;
  undefined8 *unaff_x20;
  size_t unaff_x21;
  undefined8 uVar13;
  long unaff_x23;
  long *unaff_x24;
  long unaff_x29;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_00d5941c();
  }
  puVar3 = Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
  uVar13 = *(undefined8 *)(*(long *)(param_2 + 0xc0) + 0x48);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864(*unaff_x24);
  }
  uVar13 = FUN_01780344(uVar13,0);
  uVar5 = FUN_01780344(*(undefined8 *)puVar3,0);
  uVar6 = FUN_01789ac0(uVar13,uVar5,0);
  if ((uVar6 & 1) == 0) {
LAB_011cdbe4:
    lVar7 = *unaff_x19;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    puVar3 = OVRPlugin_OVRP_1_50_0_TypeInfo;
    uVar13 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x48);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_00d32864(*unaff_x24);
    }
    uVar13 = FUN_01780344(uVar13,0);
    uVar5 = FUN_01780344(*(undefined8 *)puVar3,0);
    uVar6 = FUN_01789ac0(uVar13,uVar5,0);
    if ((uVar6 & 1) != 0) {
      lVar7 = *unaff_x19;
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      pvVar1 = *(void **)(unaff_x29 + -0x60);
      if (-1 < *(int *)(lVar7 + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + -0x60);
      }
      memcpy(unaff_x20,pvVar1,unaff_x21);
      lVar7 = *unaff_x19;
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x28) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      plVar8 = (long *)thunk_FUN_00d61fa0();
      if (plVar8 == (long *)0x0) goto LAB_011ce4e4;
      if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)StringLiteral_7239 + 0x40))
      goto LAB_011ce4ec;
      pcVar9 = (char *)thunk_FUN_00d624a0();
      if (*pcVar9 == '\0') goto LAB_011ce458;
    }
    lVar7 = *unaff_x19;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    puVar3 = Method_System_Linq_Enumerable_ToList<EdgeLookup>__;
    uVar13 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x48);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_00d32864(*unaff_x24);
    }
    uVar13 = FUN_01780344(uVar13,0);
    uVar5 = FUN_01780344(*(undefined8 *)puVar3,0);
    uVar6 = FUN_01789ac0(uVar13,uVar5,0);
    if ((uVar6 & 1) != 0) {
      lVar7 = *unaff_x19;
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      pvVar1 = *(void **)(unaff_x29 + -0x60);
      if (-1 < *(int *)(lVar7 + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + -0x60);
      }
      memcpy(unaff_x20,pvVar1,unaff_x21);
      lVar7 = *unaff_x19;
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
                    /* try { // try from 011cdda8 to 012cdedb has its CatchHandler @ 011cdda8
                       catch() { ... } // from try @ 011cdda8 with catch @ 011cdda8
                       catch() { ... } // from try @ 011cdf04 with catch @ 011cdda8
                       catch() { ... } // from try @ 011cdf64 with catch @ 011cdda8
                       catch() { ... } // from try @ 011cdfa0 with catch @ 011cdda8
                       catch() { ... } // from try @ 011cdfd4 with catch @ 011cdda8
                       catch() { ... } // from try @ 011ce134 with catch @ 011cdda8 */
      if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x28) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      plVar8 = (long *)thunk_FUN_00d61fa0();
      if (plVar8 == (long *)0x0) goto LAB_011ce4e4;
      if (*(long *)(*plVar8 + 0x40) !=
          *(long *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0x40)) goto LAB_011ce4ec;
      psVar10 = (short *)thunk_FUN_00d624a0();
      if (*psVar10 == 0) goto LAB_011ce458;
    }
    lVar7 = *unaff_x19;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    puVar3 = Method_System_Data_DataSet_ReadXmlDiffgram__;
    uVar13 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x48);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_00d32864(*unaff_x24);
    }
    uVar13 = FUN_01780344(uVar13,0);
    uVar5 = FUN_01780344(*(undefined8 *)puVar3,0);
    uVar6 = FUN_01789ac0(uVar13,uVar5,0);
    if ((uVar6 & 1) != 0) {
      lVar7 = *unaff_x19;
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      pvVar1 = *(void **)(unaff_x29 + -0x60);
      if (-1 < *(int *)(lVar7 + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + -0x60);
      }
      memcpy(unaff_x20,pvVar1,unaff_x21);
      lVar7 = *unaff_x19;
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x28) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      plVar8 = (long *)thunk_FUN_00d61fa0();
      if (plVar8 == (long *)0x0) goto LAB_011ce4e4;
                    /* try { // try from 011cdedc to 012cdf03 has its CatchHandler @ 011cdfa4 */
      if (*(long *)(*plVar8 + 0x40) !=
          *(long *)(*(long *)OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo + 0x40))
      goto LAB_011ce4ec;
      plVar8 = (long *)thunk_FUN_00d624a0();
      if (*plVar8 == 0) goto LAB_011ce458;
    }
    lVar7 = *unaff_x19;
                    /* try { // try from 011cdf04 to 012cdf33 has its CatchHandler @ 011cdda8 */
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    puVar3 = Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__;
    uVar13 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x48);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_00d32864(*unaff_x24);
    }
                    /* try { // try from 011cdf34 to 012cdf63 has its CatchHandler @ 011cdfa4 */
    uVar13 = FUN_01780344(uVar13,0);
    uVar5 = FUN_01780344(*(undefined8 *)puVar3,0);
    uVar6 = FUN_01789ac0(uVar13,uVar5,0);
    if ((uVar6 & 1) != 0) {
                    /* try { // try from 011cdf64 to 012cdf9b has its CatchHandler @ 011cdda8 */
      lVar7 = *unaff_x19;
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
                    /* try { // try from 011cdf9c to 012cdf9f has its CatchHandler @ 011cdfa4 */
      pvVar1 = *(void **)(unaff_x29 + -0x60);
                    /* try { // try from 011cdfa0 to 012cdfbb has its CatchHandler @ 011cdda8 */
      if (-1 < *(int *)(lVar7 + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + -0x60);
      }
                    /* catch(type#1 @ 03274860) { ... } // from try @ 011cdedc with catch @ 011cdfa4
                       catch(type#1 @ 03274860) { ... } // from try @ 011cdf34 with catch @ 011cdfa4
                       catch(type#1 @ 03274860) { ... } // from try @ 011cdf9c with catch @ 011cdfa4
                        */
      memcpy(unaff_x20,pvVar1,unaff_x21);
      lVar7 = *unaff_x19;
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x28) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      plVar8 = (long *)thunk_FUN_00d61fa0();
      if (plVar8 == (long *)0x0) goto LAB_011ce4e4;
      if (*(long *)(*plVar8 + 0x40) !=
          *(long *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__ + 0x40))
      goto LAB_011ce4ec;
      plVar8 = (long *)thunk_FUN_00d624a0();
      if (*plVar8 == 0) goto LAB_011ce458;
    }
    lVar7 = *unaff_x19;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    puVar3 = StringLiteral_5228;
    uVar13 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x48);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_00d32864(*unaff_x24);
    }
    uVar13 = FUN_01780344(uVar13,0);
    uVar5 = FUN_01780344(*(undefined8 *)puVar3,0);
    uVar6 = FUN_01789ac0(uVar13,uVar5,0);
    if ((uVar6 & 1) != 0) {
      lVar7 = *unaff_x19;
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      pvVar1 = *(void **)(unaff_x29 + -0x60);
      if (-1 < *(int *)(lVar7 + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + -0x60);
      }
      memcpy(unaff_x20,pvVar1,unaff_x21);
      lVar7 = *unaff_x19;
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x28) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      plVar8 = (long *)thunk_FUN_00d61fa0();
      if (plVar8 == (long *)0x0) goto LAB_011ce4e4;
      if (*(long *)(*plVar8 + 0x40) !=
          *(long *)(*(long *)Method_System_Data_Common_UInt32Storage_Aggregate__ + 0x40))
      goto LAB_011ce4ec;
      psVar10 = (short *)thunk_FUN_00d624a0();
      if (*psVar10 == 0) goto LAB_011ce458;
    }
    lVar7 = *unaff_x19;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
    uVar13 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x48);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_00d32864(*unaff_x24);
    }
    uVar13 = FUN_01780344(uVar13,0);
    uVar5 = FUN_01780344(*(undefined8 *)puVar3,0);
    uVar6 = FUN_01789ac0(uVar13,uVar5,0);
    if ((uVar6 & 1) != 0) {
      lVar7 = *unaff_x19;
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      pvVar1 = *(void **)(unaff_x29 + -0x60);
      if (-1 < *(int *)(lVar7 + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + -0x60);
      }
      memcpy(unaff_x20,pvVar1,unaff_x21);
      lVar7 = *unaff_x19;
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x28) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      plVar8 = (long *)thunk_FUN_00d61fa0();
      if (plVar8 == (long *)0x0) goto LAB_011ce4e4;
      if (*(long *)(*plVar8 + 0x40) !=
          *(long *)(*(long *)
                     Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
                   + 0x40)) goto LAB_011ce4ec;
      psVar10 = (short *)thunk_FUN_00d624a0();
      if (*psVar10 == 0) goto LAB_011ce458;
    }
    lVar7 = *unaff_x19;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    puVar3 = Method_System_Nullable<float>_GetValueOrDefault__;
    uVar13 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x48);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_00d32864(*unaff_x24);
    }
    uVar13 = FUN_01780344(uVar13,0);
    uVar5 = FUN_01780344(*(undefined8 *)puVar3,0);
    uVar6 = FUN_01789ac0(uVar13,uVar5,0);
    if ((uVar6 & 1) != 0) {
      lVar7 = *unaff_x19;
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      pvVar1 = *(void **)(unaff_x29 + -0x60);
      if (-1 < *(int *)(lVar7 + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + -0x60);
      }
      memcpy(unaff_x20,pvVar1,unaff_x21);
      lVar7 = *unaff_x19;
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x28) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      plVar8 = (long *)thunk_FUN_00d61fa0();
      if (plVar8 == (long *)0x0) goto LAB_011ce4e4;
      if (*(long *)(*plVar8 + 0x40) !=
          *(long *)(*(long *)
                     Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                   + 0x40)) goto LAB_011ce4ec;
      puVar11 = (undefined8 *)thunk_FUN_00d624a0();
      uVar6 = FUN_017b4f64(0,*puVar11,0);
      if ((uVar6 & 1) != 0) goto LAB_011ce458;
    }
    lVar7 = *unaff_x19;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    puVar3 = StringLiteral_10024;
    uVar13 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x48);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_00d32864(*unaff_x24);
    }
    uVar13 = FUN_01780344(uVar13,0);
    uVar5 = FUN_01780344(*(undefined8 *)puVar3,0);
    uVar6 = FUN_01789ac0(uVar13,uVar5,0);
    if ((uVar6 & 1) != 0) {
      lVar7 = *unaff_x19;
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      pvVar1 = *(void **)(unaff_x29 + -0x60);
      if (-1 < *(int *)(lVar7 + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + -0x60);
      }
      memcpy(unaff_x20,pvVar1,unaff_x21);
      lVar7 = *unaff_x19;
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      puVar3 = PTR_DAT_033f1148;
      if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x28) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      plVar8 = (long *)thunk_FUN_00d61fa0();
      lVar7 = *(long *)puVar3;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar7);
        lVar7 = *(long *)puVar3;
      }
      if (plVar8 == (long *)0x0) goto LAB_011ce4e4;
      if (*(long *)(*plVar8 + 0x40) != *(long *)(lVar7 + 0x40)) {
LAB_011ce4ec:
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar8);
      }
      puVar11 = (undefined8 *)thunk_FUN_00d624a0();
      uVar6 = FUN_017cc45c(0,*puVar11,0);
      if ((uVar6 & 1) != 0) goto LAB_011ce458;
    }
    lVar7 = *unaff_x19;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    pvVar1 = *(void **)(unaff_x29 + -0x60);
    if (-1 < *(int *)(lVar7 + 0x28)) {
      pvVar1 = (void *)(unaff_x29 + -0x60);
    }
    memcpy(unaff_x20,pvVar1,unaff_x21);
    lVar7 = *unaff_x19;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x18) + 0x132) & 1) == 0) {
      FUN_00d5941c();
    }
    lVar7 = thunk_FUN_00d62348();
    if (lVar7 == 0) {
LAB_011ce4e4:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar12 = *unaff_x19;
    uVar2 = *(ushort *)(lVar12 + 0x132);
    lVar4 = lVar12;
    if ((uVar2 & 1) == 0) {
      lVar12 = FUN_00d5941c(lVar12);
      uVar2 = *(ushort *)(*unaff_x19 + 0x132);
      lVar4 = *unaff_x19;
    }
    uVar13 = **(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0x58);
    lVar12 = lVar4;
    if ((uVar2 & 1) == 0) {
      lVar4 = FUN_00d5941c(lVar4);
      uVar2 = *(ushort *)(*unaff_x19 + 0x132);
      lVar12 = *unaff_x19;
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x58);
    if ((uVar2 & 1) == 0) {
      lVar12 = FUN_00d5941c(lVar12);
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x28);
    if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
      lVar12 = FUN_00d5941c();
    }
    if (-1 < *(int *)(lVar12 + 0x28)) {
      unaff_x20 = (undefined8 *)*unaff_x20;
    }
    *(undefined8 **)(unaff_x29 + -0x58) = unaff_x20;
    (**(code **)(lVar4 + 0x10))(uVar13,lVar4,lVar7,unaff_x29 + -0x58,unaff_x20);
  }
  else {
    lVar7 = *unaff_x19;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    pvVar1 = *(void **)(unaff_x29 + -0x60);
    if (-1 < *(int *)(lVar7 + 0x28)) {
      pvVar1 = (void *)(unaff_x29 + -0x60);
    }
    memcpy(unaff_x20,pvVar1,unaff_x21);
    lVar7 = *unaff_x19;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x28) + 0x132) & 1) == 0) {
      FUN_00d5941c();
    }
    plVar8 = (long *)thunk_FUN_00d61fa0();
    if (plVar8 == (long *)0x0) goto LAB_011ce4e4;
    if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)UnityEngine_Texture2D___TypeInfo + 0x40))
    goto LAB_011ce4ec;
    pcVar9 = (char *)thunk_FUN_00d624a0();
    if (*pcVar9 != '\0') goto LAB_011cdbe4;
LAB_011ce458:
    lVar7 = *unaff_x19;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar7 = *unaff_x19;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = **(long **)(lVar7 + 0xb8);
  }
  if (*(long *)(unaff_x23 + 0x28) != *(long *)(unaff_x29 + -0x48)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar7;
}


