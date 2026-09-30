/*
FUNCTION_NAME: FUN_01405884
ENTRY_POINT: 01405884
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_18;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


long * FUN_01405884(long param_1,undefined4 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  uint uVar15;
  ulong uVar16;
  long local_70;
  undefined4 local_64;
  
  if ((DAT_0377691d & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vsraq_n_s64__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<MRUKAnchor,_GameObject>_GetEnumerator__
                      );
    thunk_FUN_00d48444(
                      System_Tuple<Socket_AwaitableSocketAsyncEventArgs,_Action<object>,_object>_TypeInfo
                      );
    thunk_FUN_00d48444(Method_BlastWeakPoint_CollisionEntered__);
    thunk_FUN_00d48444(PTR_DAT_033ee9b8);
    thunk_FUN_00d48444(UnityEngine_InputSystem_Users_InputUser_<>c_TypeInfo);
    thunk_FUN_00d48444(Method_FullSerializer_fsBaseConverter_SerializeMember<TextAnchor>__);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
                      );
    DAT_0377691d = 1;
  }
  puVar1 = PTR_DAT_033ee9b8;
  local_70 = 0;
  iVar3 = FUN_013f3ef8(0);
  if ((iVar3 < 6) && ((iVar3 = FUN_013f3ef8(0), iVar3 != 5 || (iVar3 = FUN_013f3fd4(0), iVar3 < 3)))
     ) {
    plVar6 = (long *)FUN_00da4fb8(*(undefined8 *)puVar1,0);
    return plVar6;
  }
  if ((param_1 != 0) && (uVar4 = FUN_02681c0c(param_1,0), param_4 != 0)) {
    local_64 = uVar4;
    uVar7 = FUN_0129eff4(param_4,&local_64,&local_70,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<MRUKAnchor,_GameObject>_GetEnumerator__
                        );
    if ((uVar7 & 1) == 0) {
      lVar8 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_FullSerializer_fsBaseConverter_SerializeMember<TextAnchor>__
                                );
      puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vsraq_n_s64__;
      if (lVar8 == 0) goto LAB_01405ce8;
      FUN_01405cfc();
      local_70 = lVar8;
      local_64 = FUN_02681c0c(param_1,0);
      FUN_0129a054(param_4,&local_64,local_70,*(undefined8 *)puVar2);
    }
    puVar13 = (undefined8 *)UnityEngine_InputSystem_Users_InputUser_<>c_TypeInfo;
    if (local_70 != 0) {
      if (*(long *)(local_70 + 0xa0) == 0) {
        uVar4 = FUN_0266a58c(param_1,0);
        plVar6 = (long *)FUN_00da4fb8(*(undefined8 *)puVar1,uVar4);
        uVar4 = FUN_02665480(param_1,0);
        puVar2 = 
        Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__;
        puVar1 = Method_BlastWeakPoint_CollisionEntered__;
        if (plVar6 != (long *)0x0) {
          if (0 < (int)plVar6[3]) {
            uVar7 = 0;
            do {
              lVar8 = thunk_FUN_00d62348(*puVar13);
              if (lVar8 == 0) goto LAB_01405ce8;
              FUN_017b46ec(lVar8,0);
              lVar9 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar6 + 0x40));
              if (lVar9 == 0) goto LAB_01405cec;
              if (*(uint *)(plVar6 + 3) <= uVar7) goto LAB_01405cf8;
              plVar6[uVar7 + 4] = lVar8;
              uVar5 = FUN_013f4bd0(param_1,uVar7 & 0xffffffff,0);
              uVar10 = FUN_00da4fb8(*(undefined8 *)
                                     System_Tuple<Socket_AwaitableSocketAsyncEventArgs,_Action<object>,_object>_TypeInfo
                                    ,uVar5);
              *(undefined8 *)(lVar8 + 0x30) = uVar10;
              uVar10 = FUN_0266a604(param_1,uVar7 & 0xffffffff,0);
              *(undefined8 *)(lVar8 + 0x18) = param_3;
              *(undefined8 *)(lVar8 + 0x20) = uVar10;
              plVar14 = *(long **)(lVar8 + 0x30);
              *(int *)(lVar8 + 0x28) = (int)uVar7;
              *(undefined4 *)(lVar8 + 0x10) = param_2;
              if (plVar14 == (long *)0x0) goto LAB_01405ce8;
              uVar16 = 0;
              while ((long)uVar16 < (long)(int)plVar14[3]) {
                lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                if (lVar9 == 0) goto LAB_01405ce8;
                FUN_017b46ec(lVar9,0);
                lVar12 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar14 + 0x40));
                if (lVar12 == 0) goto LAB_01405cec;
                if (*(uint *)(plVar14 + 3) <= uVar16) goto LAB_01405cf8;
                plVar14[uVar16 + 4] = lVar9;
                uVar5 = FUN_013f4cc4(param_1,uVar7 & 0xffffffff,uVar16 & 0xffffffff,0);
                *(undefined4 *)(lVar9 + 0x10) = uVar5;
                uVar10 = FUN_00da4fb8(*(undefined8 *)puVar2,uVar4);
                *(undefined8 *)(lVar9 + 0x18) = uVar10;
                uVar10 = FUN_00da4fb8(*(undefined8 *)puVar2,uVar4);
                *(undefined8 *)(lVar9 + 0x20) = uVar10;
                uVar10 = FUN_00da4fb8(*(undefined8 *)puVar2,uVar4);
                *(undefined8 *)(lVar9 + 0x28) = uVar10;
                FUN_013f4dc0(param_1,uVar7 & 0xffffffff,uVar16 & 0xffffffff,
                             *(undefined8 *)(lVar9 + 0x18),*(undefined8 *)(lVar9 + 0x20),uVar10,0);
                plVar14 = *(long **)(lVar8 + 0x30);
                uVar16 = uVar16 + 1;
                if (plVar14 == (long *)0x0) goto LAB_01405ce8;
              }
              uVar7 = uVar7 + 1;
              puVar13 = (undefined8 *)UnityEngine_InputSystem_Users_InputUser_<>c_TypeInfo;
            } while ((long)uVar7 < (long)(int)plVar6[3]);
          }
          if (local_70 != 0) {
            *(long **)(local_70 + 0xa0) = plVar6;
            return plVar6;
          }
        }
      }
      else {
        plVar6 = (long *)FUN_00da4fb8(*(undefined8 *)puVar1,
                                      *(undefined4 *)(*(long *)(local_70 + 0xa0) + 0x18));
        if (plVar6 != (long *)0x0) {
          if (0 < (int)plVar6[3]) {
            uVar15 = 0;
            do {
              lVar8 = thunk_FUN_00d62348(*puVar13);
              if (lVar8 == 0) goto LAB_01405ce8;
              FUN_017b46ec(lVar8,0);
              lVar9 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar6 + 0x40));
              if (lVar9 == 0) {
LAB_01405cec:
                uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                FUN_00da5038(uVar10,0);
              }
              lVar9 = plVar6[3];
              if ((uint)lVar9 <= uVar15) {
LAB_01405cf8:
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              plVar14 = plVar6 + (long)(int)uVar15 + 4;
              *plVar14 = lVar8;
              if ((local_70 == 0) || (lVar12 = *(long *)(local_70 + 0xa0), lVar12 == 0))
              goto LAB_01405ce8;
              if (*(uint *)(lVar12 + 0x18) <= uVar15) goto LAB_01405cf8;
              plVar11 = (long *)(lVar12 + (long)(int)uVar15 * 8 + 0x20);
              lVar12 = *plVar11;
              if (lVar12 == 0) goto LAB_01405ce8;
              *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)(lVar12 + 0x20);
              lVar8 = *plVar11;
              if ((lVar8 == 0) || (lVar12 = *plVar14, lVar12 == 0)) goto LAB_01405ce8;
              *(undefined4 *)(lVar12 + 0x28) = *(undefined4 *)(lVar8 + 0x28);
              *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)(lVar8 + 0x30);
              lVar8 = *plVar14;
              if (lVar8 == 0) goto LAB_01405ce8;
              uVar15 = uVar15 + 1;
              *(undefined4 *)(lVar8 + 0x10) = param_2;
              *(undefined8 *)(lVar8 + 0x18) = param_3;
            } while ((int)uVar15 < (int)(uint)lVar9);
          }
          return plVar6;
        }
      }
    }
  }
LAB_01405ce8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


