/*
FUNCTION_NAME: Unity.Services.Multiplayer.NetworkConfiguration$$.ctor
ENTRY_POINT: 05f5f930
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


void Unity_Services_Multiplayer_NetworkConfiguration___ctor(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long unaff_x19;
  int iVar12;
  long unaff_x20;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  undefined4 unaff_s11;
  undefined4 unaff_s12;
  undefined4 unaff_s13;
  float fVar18;
  undefined1 auVar19 [16];
  int iStack0000000000000000;
  int iStack0000000000000004;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  FUN_02d965b8(Method_UnityEngine_UIElements_TextInputBaseField<string>_set_text__);
  FUN_02d965b8(Method_UnityEngine_UIElements_TextInputBaseField<uint>_get_isDelayed__);
  FUN_02d965b8(Method_System_Runtime_CompilerServices_TaskAwaiter<Response>_GetResult__);
  FUN_02d965b8(
              Method_System_Runtime_CompilerServices_TaskAwaiter<HttpClientResponse>_get_IsCompleted__
              );
  FUN_02d965b8(Method_UnityEngine_UIElements_TextInputBaseField<uint>_get_textInputBase__);
  FUN_02d965b8(Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_isDelayed__);
  FUN_02d965b8(Method_System_Runtime_CompilerServices_TaskAwaiter<HttpClientResponse>_GetResult__);
  *(undefined1 *)(unaff_x20 + 0x3cf) = 1;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  auVar19 = ZEXT816(0);
  if (*(long *)(unaff_x19 + 0x238) != 0) {
    FUN_0504dc88(*(long *)(unaff_x19 + 0x238),
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_TaskAwaiter<Reply>_get_IsCompleted__);
    auVar1._8_8_ = in_stack_00000028;
    auVar1._0_8_ = in_stack_00000020;
    auVar19._8_8_ = in_stack_00000028;
    auVar19._0_8_ = in_stack_00000020;
    if ((*(long *)(unaff_x19 + 0x228) != 0) && (auVar19 = auVar1, *(long *)(unaff_x19 + 0x238) != 0)
       ) {
      FUN_0504e298(*(long *)(unaff_x19 + 0x238),*(undefined4 *)(*(long *)(unaff_x19 + 0x228) + 0x18)
                   ,0,*(undefined8 *)
                       Method_UnityEngine_UIElements_TextInputBaseField<string>_set_text__);
      puVar6 = Method_UnityEngine_UIElements_TextInputBaseField<uint>_get_textInputBase__;
      puVar2 = Method_UnityEngine_UIElements_TextInputBaseField<string>_get_textInputBase__;
      auVar19._8_8_ = in_stack_00000028;
      auVar19._0_8_ = in_stack_00000020;
      if (*(long *)(unaff_x19 + 0x240) != 0) {
        _in_stack_00000020 =
             FUN_0504e494(*(long *)(unaff_x19 + 0x240),
                          *(undefined8 *)
                           Method_UnityEngine_UIElements_TextInputBaseField<string>_get_textInputBase__
                         );
        uVar8 = FUN_03dc2430(&stack0x00000020,*(undefined8 *)puVar6);
        puVar3 = Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_isDelayed__;
        if ((uVar8 & 1) == 0) {
          iStack0000000000000000 = 0;
          iStack0000000000000004 = 0;
        }
        else {
          iStack0000000000000000 = 0;
          iStack0000000000000004 = 0;
          do {
            plVar9 = (long *)FUN_03dc23e4(&stack0x00000020,*(undefined8 *)puVar3);
            auVar19 = _in_stack_00000020;
            if ((*plVar9 == 0) || (lVar11 = *(long *)(*plVar9 + 0x10), lVar11 == 0))
            goto LAB_05f5fc6c;
            uVar13 = *(undefined8 *)(lVar11 + 0x28);
            iStack0000000000000000 = (int)uVar13 + iStack0000000000000000;
            iStack0000000000000004 = (int)((ulong)uVar13 >> 0x20) + iStack0000000000000004;
            uVar8 = FUN_03dc2430(&stack0x00000020,*(undefined8 *)puVar6);
          } while ((uVar8 & 1) != 0);
        }
        auVar19 = _in_stack_00000020;
        if (*(long *)(unaff_x19 + 0x228) != 0) {
          auVar19 = FUN_0504e494(*(long *)(unaff_x19 + 0x228),*(undefined8 *)puVar2);
          _in_stack_00000020 = auVar19;
          uVar8 = FUN_03dc2430(&stack0x00000020,*(undefined8 *)puVar6);
          puVar7 = Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_isDelayed__;
          puVar5 = Method_UnityEngine_UIElements_TextInputBaseField<uint>_get_isDelayed__;
          puVar4 = Method_UnityEngine_UIElements_TextInputBaseField<string>_set_isDelayed__;
          puVar3 = Method_System_Runtime_CompilerServices_TaskAwaiter<Response>_GetResult__;
          puVar2 = 
          Method_System_Runtime_CompilerServices_TaskAwaiter<HttpClientResponse>_GetResult__;
          while( true ) {
            if ((uVar8 & 1) == 0) {
              return;
            }
            plVar9 = (long *)FUN_03dc23e4(&stack0x00000020,*(undefined8 *)puVar7);
            lVar11 = *plVar9;
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            FUN_05f5f264(unaff_s13,unaff_s12,unaff_s11,lVar11);
            auVar19 = _in_stack_00000020;
            if ((lVar11 == 0) || (*(long *)(lVar11 + 0x38) == 0)) break;
            fVar14 = *(float *)(*(long *)(lVar11 + 0x38) + 0x28);
            lVar10 = *(long *)(unaff_x19 + 0x238);
            fVar18 = *(float *)(unaff_x19 + 0x2b8);
            if (fVar14 <= *(float *)(unaff_x19 + 0x2b8)) {
              fVar18 = fVar14;
            }
            fVar15 = *(float *)(unaff_x19 + 700);
            if (*(float *)(unaff_x19 + 700) <= fVar14) {
              fVar15 = fVar14;
            }
            *(float *)(unaff_x19 + 0x2b8) = fVar18;
            *(float *)(unaff_x19 + 700) = fVar15;
            if (lVar10 == 0) break;
            iVar12 = *(int *)(lVar10 + 0x18);
            if (iVar12 < 1) {
              iVar16 = 0;
            }
            else {
              iVar17 = 0;
              do {
                auVar19 = _in_stack_00000020;
                if ((*(long *)(lVar11 + 0x38) == 0) || (*(long *)(unaff_x19 + 0x238) == 0))
                goto LAB_05f5fc6c;
                fVar18 = *(float *)(*(long *)(lVar11 + 0x38) + 0x28);
                plVar9 = (long *)FUN_0504e344(*(long *)(unaff_x19 + 0x238),iVar17,
                                              *(undefined8 *)puVar3);
                auVar19 = _in_stack_00000020;
                if ((*plVar9 == 0) || (lVar10 = *(long *)(*plVar9 + 0x38), lVar10 == 0))
                goto LAB_05f5fc6c;
                iVar16 = iVar17;
              } while ((fVar18 <= *(float *)(lVar10 + 0x28)) &&
                      (iVar17 = iVar17 + 1, iVar16 = iVar12, iVar12 != iVar17));
              lVar10 = *(long *)(unaff_x19 + 0x238);
              if (lVar10 == 0) break;
            }
            FUN_0504de94(lVar10,iVar16,lVar11,*(undefined8 *)puVar4);
            lVar11 = *(long *)(unaff_x19 + 0x238);
            auVar19 = _in_stack_00000020;
            if (lVar11 == 0) break;
            iVar16 = 0;
            iVar17 = 0;
            iVar12 = 1;
            while (iVar12 + -1 < *(int *)(lVar11 + 0x18)) {
              plVar9 = (long *)FUN_0504e344(lVar11,iVar12 + -1,*(undefined8 *)puVar3);
              auVar19 = _in_stack_00000020;
              if ((*plVar9 == 0) || (lVar11 = *(long *)(*plVar9 + 0x10), lVar11 == 0))
              goto LAB_05f5fc6c;
              uVar13 = *(undefined8 *)(lVar11 + 0x28);
              iVar16 = (int)uVar13 + iVar16;
              iVar17 = (int)((ulong)uVar13 >> 0x20) + iVar17;
              if (iStack0000000000000004 <= iVar17 && iStack0000000000000000 <= iVar16) {
                if (*(long *)(unaff_x19 + 0x238) == 0) goto LAB_05f5fc6c;
                FUN_0504e200(*(long *)(unaff_x19 + 0x238),iVar12,0,*(undefined8 *)puVar5);
                break;
              }
              lVar11 = *(long *)(unaff_x19 + 0x238);
              iVar12 = iVar12 + 1;
              if (lVar11 == 0) goto LAB_05f5fc6c;
            }
            uVar8 = FUN_03dc2430(&stack0x00000020,*(undefined8 *)puVar6);
          }
        }
      }
    }
  }
LAB_05f5fc6c:
  _in_stack_00000020 = auVar19;
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


