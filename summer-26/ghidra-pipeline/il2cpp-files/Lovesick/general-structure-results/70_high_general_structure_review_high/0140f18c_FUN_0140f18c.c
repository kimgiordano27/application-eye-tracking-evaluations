/*
FUNCTION_NAME: FUN_0140f18c
ENTRY_POINT: 0140f18c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Type propagation algorithm not settling */

void FUN_0140f18c(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,int param_5,
                 ulong param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  undefined1 local_6c [4];
  undefined4 local_68;
  undefined4 uStack_64;
  
  puVar2 = Method_System_Data_DataCommonEventSource_EnterScope<int,_int>__;
  if ((DAT_0377695d & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vsraq_n_s64__);
    thunk_FUN_00d48444(PTR_DAT_033efa68);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<IEventDispatchingStrategy>_MoveNext__
                      );
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_Where<KeyValuePair<string,_JsonSchemaModel>>__)
    ;
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<RenderGraphPass>__ctor__);
    thunk_FUN_00d48444(StringLiteral_12558);
    thunk_FUN_00d48444(Method_System_Data_DataCommonEventSource_EnterScope<int,_int>__);
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
    DAT_0377695d = 1;
  }
  local_6c[0] = 0;
  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  puVar2 = Method_System_Collections_Generic_List_Enumerator<IEventDispatchingStrategy>_MoveNext__;
  if (lVar6 == 0) {
LAB_0140f758:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_01320e50(lVar6,*(undefined8 *)
                      Method_System_Linq_Enumerable_Where<KeyValuePair<string,_JsonSchemaModel>>__);
  FUN_01322050(lVar6,param_2,*(undefined8 *)puVar2);
  FUN_01322050(lVar6,param_3,*(undefined8 *)puVar2);
  puVar3 = 
  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__;
  puVar2 = Method_BlastWeakPoint_CollisionEntered__;
  if (0 < *(int *)(lVar6 + 0x18)) {
    iVar12 = 0;
    do {
      FUN_0132138c(lVar6,iVar12,&local_68,*(undefined8 *)StringLiteral_12558);
      lVar1 = CONCAT44(uStack_64,local_68);
      if ((lVar1 == 0) || (lVar16 = *(long *)(lVar1 + 0xc0), lVar16 == 0)) goto LAB_0140f758;
      lVar13 = *(long *)(param_1 + 0x18);
      uVar4 = FUN_02681c0c(lVar16,0);
      if (lVar13 == 0) goto LAB_0140f758;
      local_68 = uVar4;
      uVar7 = FUN_0129aa60(lVar13,&local_68,*(undefined8 *)PTR_DAT_033efa68);
      if ((uVar7 & 1) == 0) {
        lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                     Method_FullSerializer_fsBaseConverter_SerializeMember<TextAnchor>__
                                   );
        if (lVar13 == 0) goto LAB_0140f758;
        FUN_01405cfc();
        lVar14 = *(long *)(param_1 + 0x18);
        uVar4 = FUN_02681c0c(lVar16,0);
        if (lVar14 == 0) goto LAB_0140f758;
        local_68 = uVar4;
        FUN_0129a054(lVar14,&local_68,lVar13,
                     *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vsraq_n_s64__);
        if ((param_4 & 1) != 0) {
          uVar8 = FUN_0266b978(lVar16,0);
          *(undefined8 *)(lVar13 + 0x18) = uVar8;
        }
        if ((param_4 >> 4 & 1) != 0) {
          uVar8 = FUN_0140f76c(param_1,lVar16);
          *(undefined8 *)(lVar13 + 0x30) = uVar8;
        }
        if ((param_4 >> 6 & 1) != 0) {
          uVar8 = FUN_0140f82c(param_1,lVar16,lVar13 + 0x48);
          *(undefined8 *)(lVar13 + 0x40) = uVar8;
        }
        if ((param_4 >> 1 & 1) != 0) {
          uVar8 = FUN_0140f8fc(param_1,lVar16);
          *(undefined8 *)(lVar13 + 0x20) = uVar8;
        }
        if ((param_4 >> 2 & 1) != 0) {
          uVar8 = FUN_0140fb20(param_1,lVar16);
          *(undefined8 *)(lVar13 + 0x28) = uVar8;
        }
        if ((param_4 >> 7 & 1) != 0) {
          uVar8 = FUN_013f4544(3,lVar16,*(undefined4 *)(param_1 + 0x10),0);
          *(undefined8 *)(lVar13 + 0x50) = uVar8;
        }
        if ((param_4 >> 8 & 1) != 0) {
          uVar8 = FUN_013f4544(4,lVar16,*(undefined4 *)(param_1 + 0x10),0);
          *(undefined8 *)(lVar13 + 0x58) = uVar8;
        }
        if ((param_4 >> 9 & 1) != 0) {
          uVar8 = FUN_013f4544(5,lVar16,*(undefined4 *)(param_1 + 0x10),0);
          *(undefined8 *)(lVar13 + 0x60) = uVar8;
        }
        if ((param_4 >> 10 & 1) != 0) {
          uVar8 = FUN_013f4544(6,lVar16,*(undefined4 *)(param_1 + 0x10),0);
          *(undefined8 *)(lVar13 + 0x68) = uVar8;
        }
        if ((param_4 >> 0xb & 1) != 0) {
          uVar8 = FUN_013f4544(7,lVar16,*(undefined4 *)(param_1 + 0x10),0);
          *(undefined8 *)(lVar13 + 0x70) = uVar8;
        }
        if ((param_4 >> 0xc & 1) != 0) {
          uVar8 = FUN_013f4544(8,lVar16,*(undefined4 *)(param_1 + 0x10),0);
          *(undefined8 *)(lVar13 + 0x78) = uVar8;
        }
        if ((param_4 >> 3 & 1) != 0) {
          uVar8 = FUN_0140fd94(param_1,lVar16);
          *(undefined8 *)(lVar13 + 0x80) = uVar8;
        }
        if (param_5 == 1) {
          uVar8 = *(undefined8 *)(lVar1 + 200);
          FUN_0140ffb4(uVar8,*(undefined8 *)(lVar13 + 0x90),local_6c);
          uVar4 = FUN_02665480(lVar16,0);
          uVar8 = FUN_01410328(uVar8,uVar4,local_6c[0]);
          *(undefined8 *)(lVar13 + 0x88) = uVar8;
          if ((param_6 & 1) != 0) {
            uVar4 = FUN_0266a58c(lVar16,0);
            plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ee9b8,uVar4);
            uVar4 = FUN_02665480(lVar16,0);
            if (plVar9 == (long *)0x0) goto LAB_0140f758;
            if (0 < (int)plVar9[3]) {
              uVar7 = 0;
              do {
                lVar14 = thunk_FUN_00d62348(*(undefined8 *)
                                             UnityEngine_InputSystem_Users_InputUser_<>c_TypeInfo);
                if (lVar14 == 0) goto LAB_0140f758;
                FUN_017b46ec(lVar14,0);
                lVar10 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar9 + 0x40));
                if (lVar10 == 0) {
LAB_0140f75c:
                  uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                  FUN_00da5038(uVar8,0);
                }
                if (*(uint *)(plVar9 + 3) <= uVar7) {
LAB_0140f768:
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                plVar9[uVar7 + 4] = lVar14;
                uVar5 = FUN_013f4bd0(lVar16,uVar7 & 0xffffffff,0);
                uVar8 = FUN_00da4fb8(*(undefined8 *)
                                      System_Tuple<Socket_AwaitableSocketAsyncEventArgs,_Action<object>,_object>_TypeInfo
                                     ,uVar5);
                *(undefined8 *)(lVar14 + 0x30) = uVar8;
                uVar8 = FUN_0266a604(lVar16,uVar7 & 0xffffffff,0);
                *(undefined8 *)(lVar14 + 0x20) = uVar8;
                *(int *)(lVar14 + 0x28) = (int)uVar7;
                plVar17 = *(long **)(lVar14 + 0x30);
                *(undefined4 *)(lVar14 + 0x10) = *(undefined4 *)(lVar1 + 0x10);
                *(undefined8 *)(lVar14 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
                if (plVar17 == (long *)0x0) goto LAB_0140f758;
                uVar15 = 0;
                while ((long)uVar15 < (long)(int)plVar17[3]) {
                  lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                  if (lVar10 == 0) goto LAB_0140f758;
                  FUN_017b46ec(lVar10,0);
                  lVar11 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar17 + 0x40));
                  if (lVar11 == 0) goto LAB_0140f75c;
                  if (*(uint *)(plVar17 + 3) <= uVar15) goto LAB_0140f768;
                  plVar17[uVar15 + 4] = lVar10;
                  uVar5 = FUN_013f4cc4(lVar16,uVar7 & 0xffffffff,uVar15 & 0xffffffff,0);
                  *(undefined4 *)(lVar10 + 0x10) = uVar5;
                  uVar8 = FUN_00da4fb8(*(undefined8 *)puVar3,uVar4);
                  *(undefined8 *)(lVar10 + 0x18) = uVar8;
                  uVar8 = FUN_00da4fb8(*(undefined8 *)puVar3,uVar4);
                  *(undefined8 *)(lVar10 + 0x20) = uVar8;
                  uVar8 = FUN_00da4fb8(*(undefined8 *)puVar3,uVar4);
                  *(undefined8 *)(lVar10 + 0x28) = uVar8;
                  FUN_013f4dc0(lVar16,uVar7 & 0xffffffff,uVar15 & 0xffffffff,
                               *(undefined8 *)(lVar10 + 0x18),*(undefined8 *)(lVar10 + 0x20),uVar8,0
                              );
                  plVar17 = *(long **)(lVar14 + 0x30);
                  uVar15 = uVar15 + 1;
                  if (plVar17 == (long *)0x0) goto LAB_0140f758;
                }
                uVar7 = uVar7 + 1;
              } while ((long)uVar7 < (long)(int)plVar9[3]);
            }
            *(long **)(lVar13 + 0xa0) = plVar9;
          }
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(int *)(lVar6 + 0x18));
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}


