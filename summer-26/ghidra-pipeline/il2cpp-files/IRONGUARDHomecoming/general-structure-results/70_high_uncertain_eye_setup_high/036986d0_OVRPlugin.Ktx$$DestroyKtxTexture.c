/*
FUNCTION_NAME: OVRPlugin.Ktx$$DestroyKtxTexture
ENTRY_POINT: 036986d0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_8;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Ktx__DestroyKtxTexture
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  long unaff_x19;
  long unaff_x20;
  long *plVar7;
  float *unaff_x21;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  ulong uVar17;
  float fVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ulong uVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fStack0000000000000024;
  float fStack0000000000000034;
  float fStack000000000000003c;
  undefined8 in_stack_00000040;
  float fStack0000000000000048;
  float fStack000000000000004c;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_4 + 0x108));
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_InequalityHandler_<>c_<_ctor>b__0_40__);
  *(undefined1 *)(unaff_x20 + 0xf08) = 1;
  puVar3 = Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__;
  plVar7 = (long *)(unaff_x19 + 0x68);
  if ((*plVar7 == 0) || (*(int *)(unaff_x19 + 0x50) != *(int *)(*plVar7 + 0x18))) {
    lVar4 = FUN_01f08890(*(undefined8 *)
                          Method_Unity_VisualScripting_InequalityHandler_<>c_<_ctor>b__0_40__);
    *plVar7 = lVar4;
    thunk_FUN_01f51358(plVar7,lVar4);
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  puVar3 = 
  Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_TopLevelAssemblyTypeResolver_ResolveType__
  ;
  fVar9 = (float)FUN_0407bb40();
  if (DAT_0482ee19 == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
    DAT_0482ee19 = '\x01';
  }
  lVar4 = *(long *)(*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8)
  ;
  fVar10 = *(float *)(lVar4 + 0x18);
  fVar15 = *(float *)(lVar4 + 0x1c);
  fVar18 = *(float *)(lVar4 + 0x20);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fVar9 = (float)FUN_03698e98(param_3 * fVar18 + fVar9 * fVar10 + param_2 * fVar15);
  fVar15 = *unaff_x21;
  fVar18 = unaff_x21[1];
  fVar10 = unaff_x21[2];
  if (DAT_0482ee19 == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
    DAT_0482ee19 = '\x01';
  }
  lVar4 = *(long *)(*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8)
  ;
  fVar28 = *(float *)(lVar4 + 0x18);
  fVar27 = *(float *)(lVar4 + 0x1c);
  fVar25 = *(float *)(lVar4 + 0x20);
  if (DAT_0482f8ab == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
                      );
    DAT_0482f8ab = '\x01';
  }
  in_stack_00000040._4_4_ = in_stack_00000040._4_4_ - fVar15;
  fStack0000000000000048 = fStack0000000000000048 - fVar18;
  fVar18 = **(float **)
             (*(long *)
               Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
             + 0xb8);
  fVar15 = fVar25 * fVar25 + fVar28 * fVar28 + fVar27 * fVar27;
  fVar10 = fStack000000000000004c - fVar10;
  if (fVar18 <= fVar15) {
    fVar16 = fVar10 * fVar25 + in_stack_00000040._4_4_ * fVar28 + fStack0000000000000048 * fVar27;
    fStack000000000000004c = fVar25 * fVar16;
    fVar18 = (fVar28 * fVar16) / fVar15;
    in_stack_00000040._4_4_ = in_stack_00000040._4_4_ - fVar18;
    fStack0000000000000048 = fStack0000000000000048 - (fVar27 * fVar16) / fVar15;
    fVar10 = fVar10 - fStack000000000000004c / fVar15;
  }
  if (DAT_0482f03e == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    DAT_0482f03e = '\x01';
  }
  puVar2 = Method_Oculus_Platform_Message<LeaderboardList>__ctor__;
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fVar28 = unaff_x21[2];
  fVar21 = *unaff_x21;
  fVar26 = unaff_x21[1];
  fStack000000000000003c = (float)FUN_0407bb40();
  fVar20 = *unaff_x21;
  fStack0000000000000034 = unaff_x21[1];
  fVar16 = unaff_x21[2];
  fVar27 = fVar18;
  fStack0000000000000024 = fStack000000000000004c;
  fVar11 = (float)FUN_0407bb40();
  fVar15 = fStack000000000000004c;
  fVar25 = fVar27;
  lVar4 = FUN_04070398();
  if (lVar4 != 0) {
    fVar12 = (float)FUN_0407ec3c(lVar4,0);
    lVar4 = FUN_04070398();
    if (lVar4 != 0) {
      FUN_0407ec3c(lVar4,0);
      lVar4 = FUN_04070398();
      if (lVar4 != 0) {
        FUN_0407ec3c(lVar4,0);
        fVar1 = DAT_00c926ac;
        if (0 < *(int *)(unaff_x19 + 0x50)) {
          fStack000000000000004c = fStack0000000000000034 - fStack000000000000004c;
          fVar13 = SQRT(in_stack_00000040._4_4_ * in_stack_00000040._4_4_ +
                        fStack0000000000000048 * fStack0000000000000048 + fVar10 * fVar10);
          lVar4 = 0;
          fStack0000000000000034 = 1.0 / fVar15;
          uVar8 = 0;
          fVar22 = 0.0;
          fVar15 = fVar13 * fStack000000000000003c;
          fStack000000000000003c = fVar26 + fVar9 * fVar13 * fStack0000000000000024;
          uVar23 = (ulong)(uint)fStack000000000000004c;
          uVar24 = (ulong)(uint)(fVar16 - fVar27);
          fVar10 = fVar20 - fVar11;
          do {
            fVar27 = *unaff_x21;
            uVar17 = (ulong)(uint)unaff_x21[1];
            uVar19 = (ulong)(uint)unaff_x21[2];
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            fVar27 = (float)FUN_036990a8(fVar27,uVar17,uVar19,fVar21 + fVar9 * fVar15,
                                         fStack000000000000003c,fVar28 + fVar9 * fVar13 * fVar18);
            if (DAT_0482f03e == '\0') {
              thunk_FUN_01efb3a4(puVar2);
              DAT_0482f03e = '\x01';
            }
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            lVar5 = *plVar7;
            if (lVar5 == 0) goto LAB_03698ce4;
            if (*(uint *)(lVar5 + 0x18) <= uVar8) goto LAB_03698ce0;
            lVar5 = lVar5 + lVar4;
            *(float *)(lVar5 + 0x20) = (1.0 / fVar12) * fVar27;
            *(float *)(lVar5 + 0x24) = fStack0000000000000034 * (float)uVar17;
            *(float *)(lVar5 + 0x28) = (1.0 / fVar25) * (float)uVar19;
            lVar5 = *plVar7;
            if (lVar5 == 0) goto LAB_03698ce4;
            if (DAT_0482ee9b == '\0') {
              thunk_FUN_01efb3a4(puVar2);
              DAT_0482ee9b = '\x01';
            }
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            fVar10 = fVar27 - fVar10;
            fVar11 = (float)uVar17 - (float)uVar23;
            fVar20 = (float)uVar19 - (float)uVar24;
            fVar26 = SQRT(fVar20 * fVar20 + fVar10 * fVar10 + fVar11 * fVar11);
            fVar16 = fVar1;
            if (fVar26 <= fVar1) {
              if (DAT_0482ee12 == '\0') {
                thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
                DAT_0482ee12 = '\x01';
              }
              pfVar6 = *(float **)
                        (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ +
                        0xb8);
              fVar10 = *pfVar6;
              fVar11 = pfVar6[1];
              fVar20 = pfVar6[2];
            }
            else {
              fVar10 = fVar10 / fVar26;
              fVar11 = fVar11 / fVar26;
              fVar20 = fVar20 / fVar26;
            }
            uVar14 = FUN_0406761c(fVar10,0);
            if (*(uint *)(lVar5 + 0x18) <= uVar8) goto LAB_03698ce0;
            lVar5 = lVar5 + lVar4;
            *(undefined4 *)(lVar5 + 0x2c) = uVar14;
            *(float *)(lVar5 + 0x30) = fVar11;
            *(float *)(lVar5 + 0x34) = fVar20;
            *(float *)(lVar5 + 0x38) = fVar16;
            uVar8 = uVar8 + 1;
            fVar22 = fVar22 + fVar26;
            lVar4 = lVar4 + 0x20;
            uVar23 = uVar17;
            uVar24 = uVar19;
            fVar10 = fVar27;
          } while ((long)uVar8 < (long)*(int *)(unaff_x19 + 0x50));
          if (1 < *(int *)(unaff_x19 + 0x50)) {
            lVar5 = *plVar7;
            lVar4 = 0x5c;
            uVar8 = 1;
            do {
              if (lVar5 == 0) goto LAB_03698ce4;
              if (((ulong)*(uint *)(lVar5 + 0x18) <= uVar8 - 1) ||
                 (*(uint *)(lVar5 + 0x18) <= uVar8)) {
LAB_03698ce0:
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              lVar5 = lVar5 + lVar4;
              fVar10 = *(float *)(lVar5 + -0x38);
              fVar15 = *(float *)(lVar5 + -0x34);
              fVar9 = *(float *)(lVar5 + -0x3c);
              fVar27 = *(float *)(lVar5 + -0x1c);
              fVar25 = *(float *)(lVar5 + -0x18);
              fVar18 = *(float *)(lVar5 + -0x14);
              if (DAT_0482f03e == '\0') {
                thunk_FUN_01efb3a4(puVar2);
                DAT_0482f03e = '\x01';
              }
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              lVar5 = *plVar7;
              if (lVar5 == 0) goto LAB_03698ce4;
              if (((ulong)*(uint *)(lVar5 + 0x18) <= uVar8 - 1) ||
                 (*(uint *)(lVar5 + 0x18) <= uVar8)) goto LAB_03698ce0;
              fVar9 = fVar9 - fVar27;
              fVar10 = fVar10 - fVar25;
              fVar15 = fVar15 - fVar18;
              *(float *)(lVar5 + lVar4) =
                   SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar15 * fVar15) / fVar22 +
                   ((float *)(lVar5 + lVar4))[-8];
              uVar8 = uVar8 + 1;
              lVar4 = lVar4 + 0x20;
            } while ((long)uVar8 < (long)*(int *)(unaff_x19 + 0x50));
          }
        }
        return;
      }
    }
  }
LAB_03698ce4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


