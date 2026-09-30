/*
FUNCTION_NAME: FUN_03cf1f60
ENTRY_POINT: 03cf1f60
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;strong_file_logging_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_03cf1f60(undefined8 param_1,long param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  
  puVar2 = PTR_DAT_04572710;
  if ((DAT_04839e92 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_IO_Compression_DeflateStream_Flush__);
    thunk_FUN_01efb3a4(PTR_DAT_04572718);
    thunk_FUN_01efb3a4(PTR_DAT_045718d8);
    thunk_FUN_01efb3a4(PTR_DAT_04572720);
    thunk_FUN_01efb3a4(PTR_DAT_04572728);
    thunk_FUN_01efb3a4(PTR_DAT_04572730);
    thunk_FUN_01efb3a4(PTR_DAT_04572738);
    thunk_FUN_01efb3a4(PTR_DAT_04572740);
    thunk_FUN_01efb3a4(PTR_DAT_04572748);
    thunk_FUN_01efb3a4(PTR_DAT_04572750);
    thunk_FUN_01efb3a4(PTR_DAT_045718f0);
    thunk_FUN_01efb3a4(PTR_DAT_045718f8);
    thunk_FUN_01efb3a4(PTR_DAT_04572758);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_SavedStructState<Touch_GlobalState>__ctor__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_04572760);
    thunk_FUN_01efb3a4(PTR_DAT_04572768);
    thunk_FUN_01efb3a4(Method_Mono_Security_Protocol_Ntlm_ChallengeResponse2_Compute__);
    thunk_FUN_01efb3a4(PTR_DAT_04572770);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseUpEvent>__
                      );
    thunk_FUN_01efb3a4(Method_System_Convert_ToUInt64__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_04572778);
    thunk_FUN_01efb3a4(PTR_DAT_04572780);
    thunk_FUN_01efb3a4(PTR_DAT_04572788);
    thunk_FUN_01efb3a4(PTR_DAT_04572790);
    thunk_FUN_01efb3a4(PTR_DAT_04572710);
    thunk_FUN_01efb3a4(PTR_DAT_04572798);
    thunk_FUN_01efb3a4(PTR_DAT_045727a0);
    thunk_FUN_01efb3a4(PTR_DAT_045727a8);
    thunk_FUN_01efb3a4(PTR_DAT_045727b0);
    thunk_FUN_01efb3a4(PTR_DAT_045727b8);
    thunk_FUN_01efb3a4(PTR_DAT_045727c0);
    thunk_FUN_01efb3a4(PTR_DAT_045727c8);
    thunk_FUN_01efb3a4(PTR_DAT_045727d0);
    thunk_FUN_01efb3a4(PTR_DAT_045727d8);
    thunk_FUN_01efb3a4(PTR_DAT_045727e0);
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vsubl_s8__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__)
    ;
    thunk_FUN_01efb3a4(Method_Gameplay_Turrets_CannonTurret_<Start>b__11_2__);
    DAT_04839e92 = 1;
  }
  lVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_035ac8e8(lVar4,0);
  if (lVar4 == 0) goto LAB_03cf29a4;
  plVar11 = (long *)(lVar4 + 0x18);
  *plVar11 = param_2;
  thunk_FUN_01f51358(plVar11,param_2);
  puVar3 = PTR_DAT_04572738;
  puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if (*plVar11 == 0) {
    lVar8 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045727e0);
    FUN_03cf29b4();
    if (lVar8 == 0) goto LAB_03cf29a4;
    *(undefined8 *)(lVar8 + 0x28) = param_1;
    thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x28),param_1);
    puVar2 = PTR_DAT_045727d8;
    lVar4 = *(long *)PTR_DAT_045727d8;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar4 = *(long *)puVar2;
    }
    param_3 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
    if (param_3 == 0) {
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar4 = *(long *)puVar2;
      }
      uVar5 = **(undefined8 **)(lVar4 + 0xb8);
      param_3 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_Mono_Security_Protocol_Ntlm_ChallengeResponse2_Compute__)
      ;
      FUN_02e631d0(param_3,uVar5,*(undefined8 *)PTR_DAT_04572778,0);
      plVar11 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *plVar11 = param_3;
LAB_03cf2334:
      thunk_FUN_01f51358(plVar11,param_3);
    }
LAB_03cf233c:
    plVar11 = (long *)(lVar8 + 0x48);
    *plVar11 = param_3;
    goto LAB_03cf28fc;
  }
  uVar5 = thunk_FUN_01ecaf38(*plVar11,0);
  puVar10 = (undefined8 *)(lVar4 + 0x10);
  *puVar10 = uVar5;
  thunk_FUN_01f51358(puVar10,uVar5);
  uVar5 = *puVar10;
  uVar12 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar12 = FUN_03579868(uVar12,0);
  uVar6 = FUN_03582560(uVar5,uVar12,0);
  if ((uVar6 & 1) == 0) {
    uVar5 = *puVar10;
    uVar12 = *(undefined8 *)PTR_DAT_04572720;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar12 = FUN_03579868(uVar12,0);
    uVar6 = FUN_03582560(uVar5,uVar12,0);
    if ((uVar6 & 1) != 0) {
      lVar4 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045727c0);
      FUN_035ac8e8(lVar4,0);
      if (lVar4 == 0) goto LAB_03cf29a4;
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        *(undefined8 *)(lVar4 + 0x10) = 0;
      }
      else {
        lVar8 = *(long *)PTR_DAT_04572728;
        bVar1 = *(byte *)(lVar8 + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar11 + 200) + ((ulong)bVar1 - 1) * 8) != lVar8))
        goto LAB_03cf240c;
        *(long **)(lVar4 + 0x10) = plVar11;
        if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar11 + 200) + ((ulong)bVar1 - 1) * 8) != lVar8))
        goto LAB_03cf240c;
      }
      thunk_FUN_01f51358();
      lVar8 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045718d8);
      FUN_03cf2a8c();
      if (lVar8 == 0) goto LAB_03cf29a4;
      *(undefined8 *)(lVar8 + 0x28) = param_1;
      thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x28),param_1);
      uVar5 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_UnityEngine_InputSystem_Utilities_SavedStructState<Touch_GlobalState>__ctor__
                                );
      FUN_02e628e0(uVar5,lVar4,*(undefined8 *)PTR_DAT_045727b0,0);
      *(undefined8 *)(lVar8 + 0x48) = uVar5;
      thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x48),uVar5);
      uVar5 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_IO_Compression_DeflateStream_Flush__);
      FUN_02aaed08(uVar5,lVar4,*(undefined8 *)PTR_DAT_045727b8,0);
      goto LAB_03cf28e0;
    }
    plVar7 = (long *)System_Console__SetupStreams(*puVar10,0);
    if (((plVar7 == (long *)0x0) ||
        (plVar7 = (long *)(**(code **)(*plVar7 + 0x888))(plVar7,*(undefined8 *)(*plVar7 + 0x890)),
        plVar7 == (long *)0x0)) ||
       (lVar8 = (**(code **)(*plVar7 + 0x468))(plVar7,*(undefined8 *)(*plVar7 + 0x470)), lVar8 == 0)
       ) goto LAB_03cf29a4;
    if (*(long *)(lVar8 + 0x18) != 0) {
      if ((int)*(long *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      if (*(long *)(lVar8 + 0x20) == 0) goto LAB_03cf29a4;
      uVar6 = FUN_035841e4(*(long *)(lVar8 + 0x20),0);
      if ((uVar6 & 1) != 0) {
        lVar8 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04572770);
        FUN_03cf2ad4();
        if (lVar8 == 0) goto LAB_03cf29a4;
        *(undefined8 *)(lVar8 + 0x28) = param_1;
        thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x28),param_1);
        uVar5 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04572768);
        FUN_02e631d0(uVar5,lVar4,*(undefined8 *)PTR_DAT_04572788,0);
        *(undefined8 *)(lVar8 + 0x48) = uVar5;
        thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x48),uVar5);
        param_3 = *(long *)(lVar4 + 0x10);
        plVar11 = (long *)(lVar8 + 0x60);
        *plVar11 = param_3;
        goto LAB_03cf28fc;
      }
    }
    if ((*plVar11 == 0) || (lVar8 = thunk_FUN_01ecaf38(*plVar11,0), lVar8 == 0)) goto LAB_03cf29a4;
    lVar8 = FUN_03584e80(lVar8,*(undefined8 *)
                                Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__
                         ,0);
    plVar11 = (long *)(lVar4 + 0x20);
    *plVar11 = lVar8;
    thunk_FUN_01f51358(plVar11,lVar8);
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) goto LAB_03cf29a4;
    lVar8 = (**(code **)(*plVar11 + 0x248))(plVar11,*(undefined8 *)(*plVar11 + 0x250));
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar2);
    }
    if (lVar8 == 0) goto LAB_03cf29a4;
    plVar11 = (long *)FUN_03584cd4(lVar8,*(undefined8 *)
                                          Method_Unity_Burst_Intrinsics_Arm_Neon_vsubl_s8__,
                                   *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10),0);
    uVar6 = FUN_034a66c0(plVar11,0,0);
    if ((uVar6 & 1) != 0) goto LAB_03cf26fc;
    if (plVar11 == (long *)0x0) goto LAB_03cf29a4;
    uVar5 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
    uVar12 = *(undefined8 *)Method_System_Convert_ToUInt64__;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar2);
    }
    uVar12 = FUN_03579868(uVar12,0);
    uVar6 = FUN_03582560(uVar5,uVar12,0);
    if ((uVar6 & 1) == 0) {
      uVar5 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
      uVar12 = *(undefined8 *)
                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseUpEvent>__;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar2);
      }
      uVar12 = FUN_03579868(uVar12,0);
      uVar6 = FUN_03582560(uVar5,uVar12,0);
      if ((uVar6 & 1) != 0) goto LAB_03cf26fc;
      lVar8 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045727e0);
      FUN_03cf29b4();
      if (lVar8 == 0) goto LAB_03cf29a4;
      *(undefined8 *)(lVar8 + 0x28) = param_1;
      thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x28),param_1);
      uVar5 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_Mono_Security_Protocol_Ntlm_ChallengeResponse2_Compute__);
      puVar10 = (undefined8 *)PTR_DAT_04572790;
    }
    else {
LAB_03cf26fc:
      lVar9 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045727d0);
      FUN_035ac8e8(lVar9,0);
      if (lVar9 == 0) {
LAB_03cf29a4:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar11 = (long *)(lVar9 + 0x18);
      *plVar11 = lVar4;
      thunk_FUN_01f51358(plVar11,lVar4);
      if (((*plVar11 == 0) || (plVar11 = *(long **)(*plVar11 + 0x20), plVar11 == (long *)0x0)) ||
         (lVar4 = (**(code **)(*plVar11 + 0x248))(plVar11,*(undefined8 *)(*plVar11 + 0x250)),
         lVar4 == 0)) goto LAB_03cf29a4;
      uVar5 = FUN_03584e80(lVar4,*(undefined8 *)
                                  Method_Gameplay_Turrets_CannonTurret_<Start>b__11_2__,0);
      puVar10 = (undefined8 *)(lVar9 + 0x10);
      *puVar10 = uVar5;
      thunk_FUN_01f51358(puVar10,uVar5);
      uVar6 = FUN_034b29c8(*puVar10,0,0);
      lVar8 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045727e0);
      FUN_03cf29b4();
      if (lVar8 == 0) goto LAB_03cf29a4;
      *(undefined8 *)(lVar8 + 0x28) = param_1;
      thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x28),param_1);
      puVar2 = PTR_DAT_045727d8;
      if ((uVar6 & 1) != 0) {
        lVar4 = *(long *)PTR_DAT_045727d8;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar4 = *(long *)puVar2;
        }
        param_3 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
        if (param_3 == 0) {
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar4 = *(long *)puVar2;
          }
          uVar5 = **(undefined8 **)(lVar4 + 0xb8);
          param_3 = thunk_FUN_01f117cc(*(undefined8 *)
                                        Method_Mono_Security_Protocol_Ntlm_ChallengeResponse2_Compute__
                                      );
          FUN_02e631d0(param_3,uVar5,*(undefined8 *)PTR_DAT_04572780,0);
          plVar11 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
          *plVar11 = param_3;
          goto LAB_03cf2334;
        }
        goto LAB_03cf233c;
      }
      uVar5 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_Mono_Security_Protocol_Ntlm_ChallengeResponse2_Compute__);
      lVar4 = lVar9;
      puVar10 = (undefined8 *)PTR_DAT_045727c8;
    }
    FUN_02e631d0(uVar5,lVar4,*puVar10,0);
    puVar10 = (undefined8 *)(lVar8 + 0x48);
    *puVar10 = uVar5;
  }
  else {
    lVar4 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045727a8);
    FUN_035ac8e8(lVar4,0);
    if (lVar4 == 0) goto LAB_03cf29a4;
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      *(undefined8 *)(lVar4 + 0x10) = 0;
    }
    else {
      lVar8 = *(long *)PTR_DAT_04572740;
      bVar1 = *(byte *)(lVar8 + 0x130);
      if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar11 + 200) + ((ulong)bVar1 - 1) * 8) != lVar8)) {
LAB_03cf240c:
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar11,lVar8);
      }
      *(long **)(lVar4 + 0x10) = plVar11;
      if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar11 + 200) + ((ulong)bVar1 - 1) * 8) != lVar8))
      goto LAB_03cf240c;
    }
    thunk_FUN_01f51358((long *)(lVar4 + 0x10));
    lVar8 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04572730);
    FUN_03cf2a20();
    if (lVar8 == 0) goto LAB_03cf29a4;
    *(undefined8 *)(lVar8 + 0x28) = param_1;
    thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x28),param_1);
    lVar9 = *(long *)(lVar4 + 0x10);
    if (lVar9 == 0) goto LAB_03cf29a4;
    *(undefined1 *)(lVar8 + 0x60) = *(undefined1 *)(lVar9 + 0x24);
    *(undefined1 *)(lVar8 + 0x61) = *(undefined1 *)(lVar9 + 0x25);
    uVar5 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04572760);
    FUN_02e62c50(uVar5,lVar4,*(undefined8 *)PTR_DAT_04572798,0);
    *(undefined8 *)(lVar8 + 0x48) = uVar5;
    thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x48),uVar5);
    uVar5 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04572718);
    FUN_02aaef50(uVar5,lVar4,*(undefined8 *)PTR_DAT_045727a0,0);
LAB_03cf28e0:
    puVar10 = (undefined8 *)(lVar8 + 0x50);
    *puVar10 = uVar5;
  }
  thunk_FUN_01f51358(puVar10,uVar5);
  plVar11 = (long *)(lVar8 + 0x40);
  *plVar11 = param_3;
LAB_03cf28fc:
  thunk_FUN_01f51358(plVar11,param_3);
  return lVar8;
}


