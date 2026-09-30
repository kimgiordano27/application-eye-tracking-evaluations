/*
FUNCTION_NAME: FUN_02089be0
ENTRY_POINT: 02089be0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0208a114) */

long FUN_02089be0(long param_1,long *param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  byte bVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  long local_68;
  char local_5c [4];
  long local_58;
  
  puVar6 = Method_UnityEngine_EventSystems_ExecuteEvents_Execute<ISubmitHandler>__;
  if ((DAT_03780d36 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_Rendering_Universal_DebugDisplaySettings_get_IsPostProcessingAllowed__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<uint,_SpriteGlyph>_ContainsKey__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_ProBuilder_WingedEdge_<>c_<SortCommonIndexesByAdjacency>b__32_2__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<bool>_get_Item__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<UIZone>_Add__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<BarCustomer>_MoveNext__);
    thunk_FUN_00d48444(StringLiteral_12085);
    thunk_FUN_00d48444(Method_UnityEngine_EventSystems_ExecuteEvents_Execute<ISubmitHandler>__);
    thunk_FUN_00d48444(Method_System_ThrowHelper_ThrowNotSupportedException__);
    thunk_FUN_00d48444(
                      Method_Unity_Jobs_IJobForExtensions_ScheduleParallel<OVRLocatable_GetSceneAnchorPosesJob>__
                      );
    thunk_FUN_00d48444(Method_Mono_Math_BigInteger_TestBit__);
    DAT_03780d36 = 1;
  }
  local_5c[0] = '\0';
  local_68 = 0;
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar12 = FUN_01fc7e94(param_1,0,0);
  puVar9 = 
  Method_Unity_Jobs_IJobForExtensions_ScheduleParallel<OVRLocatable_GetSceneAnchorPosesJob>__;
  if ((uVar12 & 1) != 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar14 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar13 = thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrsrad_n_s64__);
    FUN_016ec5b8(uVar14,uVar13,0);
LAB_0208a15c:
    uVar13 = thunk_FUN_00d48444(System_Func<UriBuilder,_UriBuilder>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar14,uVar13);
  }
  if (param_1 == 0) goto LAB_0208a0d8;
  uVar13 = FUN_01fc72ec(param_1,0);
  uVar14 = FUN_01fc6088(param_1,0);
  uVar13 = FUN_01600424(uVar13,*(undefined8 *)puVar9,uVar14,0);
  lVar15 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
  if (lVar15 == 0) goto LAB_0208a0d8;
  FUN_01fc3894(lVar15,uVar13,0);
  puVar7 = Method_System_Collections_Generic_List<bool>_get_Item__;
  if (param_2 == (long *)0x0) {
LAB_02089d9c:
    bVar5 = false;
    bVar10 = 0;
  }
  else {
    lVar19 = *param_2;
    uVar12 = (ulong)*(ushort *)(lVar19 + 0x12a);
    if (uVar12 != 0) {
      piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) ==
            *(long *)Method_System_Collections_Generic_List<bool>_get_Item__) {
          puVar16 = (undefined8 *)(lVar19 + (long)(*piVar20 + 1) * 0x10 + 0x138);
          goto LAB_02089d88;
        }
        uVar12 = uVar12 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar12 != 0);
    }
    puVar16 = (undefined8 *)
              FUN_00d59724(param_2,*(long *)Method_System_Collections_Generic_List<bool>_get_Item__,
                           1);
LAB_02089d88:
    uVar12 = (*(code *)*puVar16)(param_2,param_1,puVar16[1]);
    puVar8 = Method_Mono_Math_BigInteger_TestBit__;
    if ((uVar12 & 1) != 0) goto LAB_02089d9c;
    uVar13 = FUN_01fc72ec(param_1,0);
    uVar17 = thunk_FUN_015fe514(uVar13,*(undefined8 *)puVar8,0);
    lVar19 = *param_2;
    uVar12 = (ulong)*(ushort *)(lVar19 + 0x12a);
    if (uVar12 != 0) {
      piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar7) {
          puVar16 = (undefined8 *)(lVar19 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_02089e18;
        }
        uVar12 = uVar12 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar12 != 0);
    }
    puVar16 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar7,0);
LAB_02089e18:
    param_1 = (*(code *)*puVar16)(param_2,param_1,puVar16[1]);
    puVar7 = Method_System_ThrowHelper_ThrowNotSupportedException__;
    if (param_1 == 0) goto LAB_0208a0d8;
    uVar13 = FUN_01fc72ec(param_1,0);
    uVar12 = FUN_015fe7e8(uVar13,*(undefined8 *)puVar7,0);
    if ((uVar12 & 1) != 0) {
      thunk_FUN_00d48444(Method_RCG_Events_ShowPromptOnMessage_OnTeleport__);
      uVar14 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      uVar13 = thunk_FUN_00d48444(
                                 Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable<JProperty>_GetAwaiter__
                                 );
      FUN_0176c578(uVar14,uVar13,0);
      goto LAB_0208a15c;
    }
    if ((uVar17 & 1) == 0) {
      bVar10 = 0;
    }
    else {
      uVar13 = FUN_01fc72ec(param_1,0);
      bVar10 = thunk_FUN_015fe514(uVar13,*(undefined8 *)puVar7,0);
    }
    bVar5 = true;
  }
  uVar13 = FUN_01fc72ec(param_1,0);
  uVar14 = FUN_01fc6088(param_1,0);
  uVar13 = FUN_01600424(uVar13,*(undefined8 *)puVar9,uVar14,0);
  lVar19 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
  puVar6 = Method_System_Collections_Generic_List<UIZone>_Add__;
  if (lVar19 != 0) {
    FUN_01fc3894(lVar19,uVar13,0);
    lVar18 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
    puVar6 = Method_System_Collections_Generic_List_Enumerator<BarCustomer>_MoveNext__;
    if (lVar18 != 0) {
      lVar1 = lVar19;
      if (!bVar5) {
        lVar1 = 0;
      }
      FUN_017b46ec(lVar18,0);
      *(long *)(lVar18 + 0x10) = lVar15;
      *(long *)(lVar18 + 0x18) = lVar1;
      *(byte *)(lVar18 + 0x20) = bVar10 & 1;
      lVar15 = *(long *)puVar6;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar15 = *(long *)puVar6;
      }
      uVar13 = **(undefined8 **)(lVar15 + 0xb8);
      local_5c[0] = '\0';
      FUN_017d75a8(uVar13,local_5c,0);
      lVar15 = *(long *)puVar6;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar15 = *(long *)puVar6;
      }
      if (**(long **)(lVar15 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar12 = FUN_012730d4(**(long **)(lVar15 + 0xb8),lVar18,&local_68,
                            *(undefined8 *)
                             Method_System_Collections_Generic_Dictionary<uint,_SpriteGlyph>_ContainsKey__
                           );
      lVar15 = local_68;
      if ((uVar12 & 1) == 0) {
        lVar15 = *(long *)puVar6;
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar15);
          lVar15 = *(long *)puVar6;
        }
        if (0 < *(int *)(*(long *)(lVar15 + 0xb8) + 0x18)) {
          if (*(int *)(lVar15 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar15);
            lVar15 = *(long *)puVar6;
          }
          if (**(long **)(lVar15 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          iVar11 = FUN_01275ee0(**(long **)(lVar15 + 0xb8),
                                *(undefined8 *)
                                 Method_UnityEngine_ProBuilder_WingedEdge_<>c_<SortCommonIndexesByAdjacency>b__32_2__
                               );
          lVar15 = *(long *)puVar6;
          if (*(int *)(*(long *)(lVar15 + 0xb8) + 0x18) <= iVar11) {
            thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
            lVar15 = thunk_FUN_00d62348();
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            uVar13 = thunk_FUN_00d48444(UnityEngine_XR_ARSubsystems_XREnvironmentProbeSubsystem_var)
            ;
            FUN_017713a8(lVar15,uVar13,0);
            uVar13 = thunk_FUN_00d48444(System_Func<UriBuilder,_UriBuilder>_TypeInfo);
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(lVar15,uVar13);
          }
        }
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar15);
          lVar15 = *(long *)puVar6;
        }
        uVar2 = *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0x10);
        uVar3 = *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0x14);
        lVar15 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_12085);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_02091df8(lVar15,lVar18,lVar19,uVar2,uVar3);
        lVar19 = *(long *)(*(long *)puVar6 + 0xb8);
        *(undefined1 *)(lVar15 + 0x31) = *(undefined1 *)(lVar19 + 0x28);
        uVar4 = *(undefined1 *)(lVar19 + 0x29);
        *(bool *)(lVar15 + 0x30) = bVar5;
        *(byte *)(lVar15 + 0x32) = bVar10 & 1;
        *(undefined1 *)(lVar15 + 0x40) = uVar4;
        local_68 = lVar15;
        FUN_0209210c(lVar15,*(undefined1 *)(lVar19 + 0x38),*(undefined4 *)(lVar19 + 0x3c),
                     *(undefined4 *)(lVar19 + 0x40));
        if (**(long **)(*(long *)puVar6 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01276608(**(long **)(*(long *)puVar6 + 0xb8),lVar18,local_68,&local_58,
                     *(undefined8 *)
                      Method_UnityEngine_Rendering_Universal_DebugDisplaySettings_get_IsPostProcessingAllowed__
                    );
        lVar15 = local_58;
      }
      if (local_5c[0] != '\0') {
        thunk_FUN_00d56f10(uVar13,0);
      }
      return lVar15;
    }
  }
LAB_0208a0d8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


