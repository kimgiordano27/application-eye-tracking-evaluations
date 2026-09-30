/*
FUNCTION_NAME: FUN_01e7f1ac
ENTRY_POINT: 01e7f1ac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void FUN_01e7f1ac(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((DAT_0377fe04 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_3460);
    thunk_FUN_00d48444(PTR_DAT_033f3250);
    thunk_FUN_00d48444(Method_System_Convert_FromBase64_ComputeResultLength__);
    thunk_FUN_00d48444(PTR_DAT_033eb1d8);
    thunk_FUN_00d48444(Method_RCG_Lovesick_Dialogue_HintMenuManager_UpdateHints__);
    DAT_0377fe04 = 1;
  }
  puVar4 = StringLiteral_3460;
  puVar3 = Method_RCG_Lovesick_Dialogue_HintMenuManager_UpdateHints__;
  puVar2 = PTR_DAT_033f3250;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((char)param_2[6] != '\0') {
    lVar7 = *(long *)StringLiteral_3460;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar7 = *(long *)puVar4;
    }
    param_2[0xe] = **(long **)(lVar7 + 0xb8);
    FUN_01fad0ec(param_1,*(undefined8 *)puVar3,param_2,0);
    return;
  }
  if (param_2[0xe] == 0) {
    *(undefined1 *)(param_2 + 6) = 1;
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01e97cf8(lVar7,param_2,0);
    lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01faf260(lVar8,param_2,lVar7,0);
    bVar1 = *(byte *)(*(long *)PTR_DAT_033eb1d8 + 300);
    if ((bVar1 <= *(byte *)(*param_2 + 300)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_033eb1d8))
    {
      if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar7 = *(long *)(*(long *)(param_1 + 0x58) + 0xb0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      plVar9 = (long *)FUN_01ec1550(lVar7,param_2[0xf],0);
      if (plVar9 == (long *)0x0) {
        lVar7 = thunk_FUN_00d48444(PTR_DAT_033eb1d8);
        if ((*(byte *)(*param_2 + 300) < *(byte *)(lVar7 + 300)) ||
           (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar7 + 300) * 8 + -8) != lVar7))
        {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(param_2);
        }
        lVar7 = thunk_FUN_00d48444(PTR_DAT_033eb1d8);
        if ((*(byte *)(lVar7 + 300) <= *(byte *)(*param_2 + 300)) &&
           (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar7 + 300) * 8 + -8) == lVar7))
        {
          plVar9 = (long *)param_2[0xf];
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar10 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
          thunk_FUN_00d48444(PTR_DAT_033ec070);
          lVar7 = thunk_FUN_00d62348();
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar11 = thunk_FUN_00d48444(Method_System_Linq_Enumerable_Cast<Vector2>__);
          FUN_01ebeb58(lVar7,uVar11,uVar10,param_2,0);
          uVar10 = thunk_FUN_00d48444(
                                     Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_IsDefined<NonSerializedAttribute>__
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(lVar7,uVar10);
        }
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(param_2);
      }
      bVar1 = *(byte *)(*(long *)Method_System_Convert_FromBase64_ComputeResultLength__ + 300);
      if ((*(byte *)(*plVar9 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_System_Convert_FromBase64_ComputeResultLength__)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar9);
      }
      FUN_01e7f1ac(param_1,plVar9);
      if (plVar9[0xe] == 0) {
        lVar7 = thunk_FUN_00d48444(PTR_DAT_033eb1d8);
        if ((*(byte *)(*param_2 + 300) < *(byte *)(lVar7 + 300)) ||
           (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar7 + 300) * 8 + -8) != lVar7))
        {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(param_2);
        }
        lVar7 = thunk_FUN_00d48444(PTR_DAT_033eb1d8);
        if ((*(byte *)(lVar7 + 300) <= *(byte *)(*param_2 + 300)) &&
           (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar7 + 300) * 8 + -8) == lVar7))
        {
          plVar9 = (long *)param_2[0xf];
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar10 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
          thunk_FUN_00d48444(PTR_DAT_033ec070);
          lVar7 = thunk_FUN_00d62348();
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar11 = thunk_FUN_00d48444(Meta_Voice_Logging_KnownErrorCode_var);
          FUN_01ebeb58(lVar7,uVar11,uVar10,param_2,0);
          uVar10 = thunk_FUN_00d48444(
                                     Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_IsDefined<NonSerializedAttribute>__
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(lVar7,uVar10);
        }
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(param_2);
      }
      if (plVar9[0xc] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      iVar5 = FUN_0173d2f4(plVar9[0xc],0);
      if (param_2[0xc] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      iVar6 = FUN_0173d2f4(param_2[0xc],0);
      if (iVar5 != iVar6) {
        plVar9 = (long *)param_2[0xd];
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar10 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
        thunk_FUN_00d48444(PTR_DAT_033ec070);
        lVar7 = thunk_FUN_00d62348();
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar11 = thunk_FUN_00d48444(PTR_DAT_033ead20);
        FUN_01ebeb58(lVar7,uVar11,uVar10,param_2,0);
        uVar10 = thunk_FUN_00d48444(
                                   Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_IsDefined<NonSerializedAttribute>__
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(lVar7,uVar10);
      }
      if (plVar9[0xe] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(int *)(plVar9[0xe] + 0x18) == 2) {
        plVar9 = (long *)param_2[0xd];
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar10 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
        thunk_FUN_00d48444(PTR_DAT_033ec070);
        lVar7 = thunk_FUN_00d62348();
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar11 = thunk_FUN_00d48444(UnityEngine_InputSystem_Android_LowLevel_AndroidAxis___TypeInfo)
        ;
        FUN_01ebeb58(lVar7,uVar11,uVar10,param_2,0);
        uVar10 = thunk_FUN_00d48444(
                                   Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_IsDefined<NonSerializedAttribute>__
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(lVar7,uVar10);
      }
    }
    param_2[0xe] = lVar8;
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}


