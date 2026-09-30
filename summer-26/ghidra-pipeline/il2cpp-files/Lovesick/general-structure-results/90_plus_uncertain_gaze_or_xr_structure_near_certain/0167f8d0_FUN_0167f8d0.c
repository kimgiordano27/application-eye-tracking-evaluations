/*
FUNCTION_NAME: FUN_0167f8d0
ENTRY_POINT: 0167f8d0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 123
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_19;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_0167f8d0(long param_1,long param_2,uint param_3)

{
  byte bVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  undefined8 local_78;
  long local_70;
  long *local_68;
  undefined *puVar7;
  
  if ((DAT_0377847f & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_ToList<TriangulationPoint>__);
    thunk_FUN_00d48444(System_Runtime_Remoting_Channels_CrossAppDomainSink_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<EdgeLookup,_Face>__ctor__);
    thunk_FUN_00d48444(System_Exception_var);
    thunk_FUN_00d48444(DG_Tweening_ShortcutExtensions_<>c__DisplayClass17_0_TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    DAT_0377847f = 1;
  }
  puVar5 = System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
  local_70 = 0;
  local_68 = (long *)0x0;
  if (param_2 == 0) {
LAB_0167fd80:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar14 = *(long *)(param_2 + 0x38);
  local_70 = 0;
  local_68 = (long *)0x0;
  if (*(long *)(param_2 + 0x10) == 0) {
    uVar6 = thunk_FUN_00d48444(StringLiteral_3033);
    uVar8 = FUN_00da4fb8(uVar6,1);
    FUN_00ac2be8(param_2);
    local_78 = *(undefined8 *)(param_2 + 0x18);
    uVar6 = thunk_FUN_00d48444(OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo);
    uVar6 = thunk_FUN_00d61fa0(uVar6,&local_78);
    FUN_00ac2be8(uVar8);
    FUN_00acb0b4(uVar8,uVar6);
    FUN_00adb25c(uVar8,0,uVar6);
    puVar5 = StringLiteral_6249;
                    /* try { // try from 0167fe0c to 0177fe13 has its CatchHandler @ 0167fee0 */
LAB_0167fe70:
    uVar6 = thunk_FUN_00d48444(puVar5);
                    /* try { // try from 0167fe74 to 0177febf has its CatchHandler @ 0167fcd0 */
    uVar6 = FUN_017b63dc(uVar6,uVar8,0);
LAB_0167feb0:
    thunk_FUN_00d48444(
                      UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                      );
                    /* try { // try from 0167fec0 to 0177fec3 has its CatchHandler @ 0167fec8 */
    uVar8 = thunk_FUN_00d62348();
                    /* try { // try from 0167fec4 to 0177feef has its CatchHandler @ 0167fcd0 */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0167fec0 with catch @ 0167fec8
                        */
    FUN_00ac2be8();
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0167fe4c with catch @ 0167fecc
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0167fe6c with catch @ 0167fed0
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0167fe1c with catch @ 0167fed4
                        */
    FUN_01679968(uVar8,uVar6);
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0167fe50 with catch @ 0167fed8
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0167fe2c with catch @ 0167fedc
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0167fe0c with catch @ 0167fee0
                        */
    uVar6 = thunk_FUN_00d48444(Method_UnityEngine_Rendering_DebugUI_Field<Enum>_set_getter__);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar8,uVar6);
  }
  if (lVar14 == 0) {
    return;
  }
  if ((*(byte *)(param_2 + 0x50) & 6) == 0) {
    iVar3 = *(int *)(lVar14 + 0x18);
    if (0 < iVar3) {
      iVar15 = 0;
      lVar10 = 4;
      do {
        lVar13 = *(long *)(lVar14 + 0x10);
        if (lVar13 == 0) goto LAB_0167fd80;
        if ((ulong)*(uint *)(lVar13 + 0x18) <= lVar10 - 4U) goto LAB_0167fd84;
        lVar13 = *(long *)(lVar13 + lVar10 * 8);
        if ((lVar13 != 0) &&
           (uVar4 = FUN_0167e560(param_1,lVar13,&local_70,&local_68,param_3 & 1), plVar2 = local_68,
           lVar9 = local_70, (uVar4 & 1) != 0)) {
          if (local_70 == 0) goto LAB_0167fd80;
          if (*(long *)(local_70 + 0x60) == 0) {
            if (*(char *)(param_2 + 0x68) != '\0') {
              *(undefined1 *)(local_70 + 0x68) = 1;
            }
          }
          else {
            *(long *)(param_2 + 0x60) = *(long *)(local_70 + 0x60);
            if (*(char *)(param_2 + 0x68) != '\0') {
                    /* try { // try from 0167fe1c to 0177fe23 has its CatchHandler @ 0167fed4 */
              uVar6 = thunk_FUN_00d48444(StringLiteral_3033);
              uVar8 = FUN_00da4fb8(uVar6,1);
                    /* try { // try from 0167fe2c to 0177fe3b has its CatchHandler @ 0167fedc */
              FUN_00ac2be8(param_2);
              lVar14 = *(long *)(param_2 + 0x60);
              FUN_00ac2be8(lVar14);
              uVar6 = *(undefined8 *)(lVar14 + 0x10);
              FUN_00ac2be8(uVar8);
                    /* try { // try from 0167fe4c to 0177fe4f has its CatchHandler @ 0167fecc */
                    /* try { // try from 0167fe50 to 0177fe5b has its CatchHandler @ 0167fed8 */
              FUN_00acb0b4(uVar8,uVar6);
              FUN_00adb25c(uVar8,0,uVar6);
                    /* try { // try from 0167fe6c to 0177fe73 has its CatchHandler @ 0167fed0 */
              puVar5 = Method_UnityEngine_Events_UnityEvent<VoiceServiceRequest>_Invoke__;
              goto LAB_0167fe70;
            }
          }
          if (*(int *)(lVar13 + 0x20) == 2) {
            if (local_68 == (long *)0x0) goto LAB_0167fd80;
            bVar1 = *(byte *)(*(long *)System_Exception_var + 300);
            plVar11 = plVar2;
            if ((*(byte *)(*local_68 + 300) < bVar1) ||
               (*(long *)(*(long *)(*local_68 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)System_Exception_var)) goto LAB_0167fd88;
            iVar3 = (**(code **)(*local_68 + 0x1a8))(local_68,*(undefined8 *)(*local_68 + 0x1b0));
            puVar7 = System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo;
            if (iVar3 != 4) goto LAB_0167fea4;
            if ((*(uint *)(param_2 + 0x50) >> 3 & 1) == 0) {
              lVar13 = *(long *)(param_2 + 0x10);
LAB_0167fc14:
              uVar6 = *(undefined8 *)(lVar9 + 0x10);
              if (*(int *)(*(long *)System_Runtime_Remoting_Channels_CrossAppDomainSink_TypeInfo +
                          0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_0167c6d4(plVar2,lVar13,uVar6);
            }
            else {
              if (((*(uint *)(param_2 + 0x50) >> 0xf & 1) == 0) &&
                 ((lVar13 = *(long *)(param_2 + 0x10), lVar13 == 0 ||
                  ((*(long *)(param_2 + 0x40) != 0 &&
                   (*(int *)(*(long *)(param_2 + 0x40) + 0x18) != 0)))))) goto LAB_0167fc14;
              bVar1 = *(byte *)(*(long *)Method_System_Linq_Enumerable_ToList<TriangulationPoint>__
                               + 300);
              if ((*(byte *)(*plVar2 + 300) < bVar1) ||
                 (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)Method_System_Linq_Enumerable_ToList<TriangulationPoint>__))
              goto LAB_0167fd88;
              FUN_0167eff4(param_1,plVar2,param_2,*(undefined8 *)(lVar9 + 0x10));
            }
            if ((*(uint *)(lVar9 + 0x50) >> 3 & 1) != 0) {
              *(uint *)(lVar9 + 0x50) = *(uint *)(lVar9 + 0x50) | 0x8000;
            }
          }
          else {
            puVar7 = System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo;
            if ((*(int *)(lVar13 + 0x20) != 1) ||
               (puVar7 = 
                Method_UnityEngine_ProBuilder_MeshOperations_SurfaceTopology_<>c_<ToTriangles>b__0_0__
               , (*(byte *)(param_2 + 0x50) >> 3 & 1) != 0)) goto LAB_0167fea4;
            plVar11 = *(long **)(param_2 + 0x10);
            if (plVar11 == (long *)0x0) goto LAB_0167fd80;
            bVar1 = *(byte *)(*(long *)DG_Tweening_ShortcutExtensions_<>c__DisplayClass17_0_TypeInfo
                             + 300);
            if ((*(byte *)(*plVar11 + 300) < bVar1) ||
               (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)DG_Tweening_ShortcutExtensions_<>c__DisplayClass17_0_TypeInfo)) {
LAB_0167fd88:
                    /* WARNING: Subroutine does not return */
              FUN_00da544c(plVar11);
            }
            uVar6 = *(undefined8 *)(local_70 + 0x10);
            if (local_68 == (long *)0x0) {
              lVar13 = 0;
            }
            else {
              uVar8 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
              lVar13 = thunk_FUN_00d6225c(local_68,uVar8);
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da544c(plVar2,uVar8);
              }
            }
                    /* try { // try from 0167fcd0 to 0177fe0b has its CatchHandler @ 0167fcd0
                       catch() { ... } // from try @ 0167fcd0 with catch @ 0167fcd0
                       catch() { ... } // from try @ 0167fe74 with catch @ 0167fcd0
                       catch() { ... } // from try @ 0167fec4 with catch @ 0167fcd0
                       catch() { ... } // from try @ 0167fef4 with catch @ 0167fcd0
                       catch() { ... } // from try @ 0167ff28 with catch @ 0167fcd0 */
            thunk_FUN_00d933d0(plVar11,uVar6,lVar13,0);
          }
          lVar13 = *(long *)(lVar14 + 0x10);
          if (lVar13 == 0) goto LAB_0167fd80;
          if ((ulong)*(uint *)(lVar13 + 0x18) <= lVar10 - 4U) goto LAB_0167fd84;
          iVar15 = iVar15 + 1;
          *(undefined8 *)(lVar13 + lVar10 * 8) = 0;
          if ((param_3 & 1) == 0) {
            *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + -1;
            if ((*(byte *)(param_2 + 0x50) >> 3 & 1) != 0) {
              FUN_01681cb4(param_2,0xffffffff,param_1);
            }
            if (*(long *)(lVar9 + 0x40) == 0) goto LAB_0167fd80;
            FUN_01681d14(*(long *)(lVar9 + 0x40),*(undefined8 *)(param_2 + 0x18));
          }
        }
        iVar3 = *(int *)(lVar14 + 0x18);
        lVar13 = lVar10 + -3;
        lVar10 = lVar10 + 1;
      } while (lVar13 < iVar3);
      goto LAB_0167fd48;
    }
  }
  else {
    lVar10 = *(long *)(param_2 + 0x28);
    puVar7 = Method_System_Collections_Generic_Queue<EventBase>_Clear__;
    if (lVar10 == 0) {
LAB_0167fea4:
      uVar6 = thunk_FUN_00d48444(puVar7);
      uVar6 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar6,0);
      goto LAB_0167feb0;
    }
    iVar3 = *(int *)(lVar14 + 0x18);
    if (0 < iVar3) {
      iVar15 = 0;
      lVar13 = 4;
      do {
        lVar9 = *(long *)(lVar14 + 0x10);
        if (lVar9 == 0) goto LAB_0167fd80;
        if ((ulong)*(uint *)(lVar9 + 0x18) <= lVar13 - 4U) goto LAB_0167fd84;
        lVar9 = *(long *)(lVar9 + lVar13 * 8);
        if ((lVar9 != 0) &&
           (uVar4 = FUN_0167e560(param_1,lVar9,&local_70,&local_68,param_3 & 1), plVar2 = local_68,
           lVar9 = local_70, (uVar4 & 1) != 0)) {
          if ((local_70 == 0) || (lVar12 = *(long *)(local_70 + 0x10), lVar12 == 0))
          goto LAB_0167fd80;
          thunk_FUN_00d93c64(lVar12,0);
          if ((plVar2 != (long *)0x0) && (*plVar2 != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(plVar2);
          }
          FUN_0167fefc(lVar10,plVar2,lVar12);
          lVar12 = *(long *)(lVar14 + 0x10);
          if (lVar12 == 0) goto LAB_0167fd80;
          if ((ulong)*(uint *)(lVar12 + 0x18) <= lVar13 - 4U) {
LAB_0167fd84:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          iVar15 = iVar15 + 1;
          *(undefined8 *)(lVar12 + lVar13 * 8) = 0;
          if ((param_3 & 1) == 0) {
            *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + -1;
            if ((*(byte *)(param_2 + 0x50) >> 3 & 1) != 0) {
              FUN_01681cb4(param_2,0xffffffff,param_1);
            }
            if (*(long *)(lVar9 + 0x40) == 0) goto LAB_0167fd80;
            FUN_01681d14(*(long *)(lVar9 + 0x40),*(undefined8 *)(param_2 + 0x18));
          }
        }
        iVar3 = *(int *)(lVar14 + 0x18);
        lVar9 = lVar13 + -3;
        lVar13 = lVar13 + 1;
      } while (lVar9 < iVar3);
      goto LAB_0167fd48;
    }
  }
  iVar15 = 0;
LAB_0167fd48:
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) - (long)iVar15;
  if (iVar3 == iVar15) {
    *(undefined8 *)(param_2 + 0x38) = 0;
  }
  return;
}


