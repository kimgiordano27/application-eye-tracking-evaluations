/*
FUNCTION_NAME: FUN_018e8ba4
ENTRY_POINT: 018e8ba4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x018e8f34) */
/* WARNING: Removing unreachable block (ram,0x018e90d0) */

void FUN_018e8ba4(long param_1)

{
  long lVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  long local_120;
  long local_118;
  uint local_10c;
  undefined1 auStack_108 [80];
  float local_b8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  long local_78;
  
                    /* try { // try from 018e8bb4 to 019e8ce3 has its CatchHandler @ 018e8bb4
                       catch() { ... } // from try @ 018e8bb4 with catch @ 018e8bb4
                       catch() { ... } // from try @ 018e8d30 with catch @ 018e8bb4
                       catch() { ... } // from try @ 018e8d78 with catch @ 018e8bb4
                       catch() { ... } // from try @ 018e8e34 with catch @ 018e8bb4 */
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if ((DAT_03779aea & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_116__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmq_f64__);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(StringLiteral_13051);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(
                      Method_System_Linq_Enumerable_<IntersectIterator>d__74<__Il2CppFullySharedGenericType>_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                      );
    thunk_FUN_00d48444(Method_Oculus_Platform_Message<SdkAccountList>_get_Data__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    DAT_03779aea = 1;
  }
  local_120 = 0;
  FUN_018e90ec(param_1);
  lVar8 = FUN_01907b10(0);
  puVar5 = StringLiteral_13051;
  puVar4 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
  puVar3 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  fVar2 = DAT_028aa028;
  lVar15 = *(long *)(param_1 + 0x18);
  if (((lVar15 != 0) && (*(long *)(param_1 + 0x20) != 0)) && (0 < (int)*(ulong *)(lVar15 + 0x18))) {
    uVar20 = 0;
    uVar12 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
    do {
      if (uVar12 <= uVar20) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      if (*(long *)(param_1 + 0x20) == 0) {
LAB_018e90c8:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar16 = *(long *)(lVar15 + uVar20 * 8 + 0x20);
                    /* try { // try from 018e8ce4 to 019e8d13 has its CatchHandler @ 018e8d48 */
      uVar12 = FUN_0129eff4(*(long *)(param_1 + 0x20),lVar16,&local_120,
                            *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_116__);
      if ((uVar12 & 1) != 0) {
        if ((local_120 == 0) || (*(long *)(local_120 + 0x10) == 0)) goto LAB_018e90c8;
        plVar9 = (long *)FUN_01356554(*(long *)(local_120 + 0x10),
                                      *(undefined8 *)
                                       Method_Oculus_Platform_Message<SdkAccountList>_get_Data__);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
LAB_018e8d14:
        lVar13 = *plVar9;
        uVar12 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar12 != 0) {
                    /* try { // try from 018e8d24 to 019e8d2f has its CatchHandler @ 018e8d44 */
          piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
                    /* try { // try from 018e8d30 to 019e8d5f has its CatchHandler @ 018e8bb4 */
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar10 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_018e8d60;
            }
            uVar12 = uVar12 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
        }
                    /* catch(type#1 @ 03274860) { ... } // from try @ 018e8d24 with catch @ 018e8d44
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 018e8ce4 with catch @ 018e8d48
                        */
        puVar10 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar4,0);
LAB_018e8d60:
                    /* try { // try from 018e8d60 to 019e8d77 has its CatchHandler @ 018e8e2c */
        uVar12 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if ((uVar12 & 1) != 0) {
          lVar13 = *plVar9;
                    /* try { // try from 018e8d78 to 019e8e1b has its CatchHandler @ 018e8bb4 */
          uVar12 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
                puVar10 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_018e8dbc;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar10 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar5,0);
LAB_018e8dbc:
          (*(code *)*puVar10)(auStack_108,plVar9,puVar10[1]);
          uVar7 = local_a0;
          if (local_b8 < fVar2) {
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            if (*(long *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_0132138c(*(long *)(lVar8 + 0x18),uStack_9c,&local_118,
                         *(undefined8 *)
                          Method_System_Linq_Enumerable_<IntersectIterator>d__74<__Il2CppFullySharedGenericType>_System_Collections_IEnumerator_Reset__
                        );
            if (local_118 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            if (*(long *)(lVar16 + 0xf8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            uVar17 = *(undefined8 *)(local_118 + 0x10);
                    /* try { // try from 018e8e1c to 019e8e2b has its CatchHandler @ 018e8e2c */
            FUN_0132138c(*(long *)(lVar16 + 0xf8),uVar7,&local_10c,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                        );
            uVar6 = local_10c;
                    /* catch() { ... } // from try @ 018e8d60 with catch @ 018e8e2c
                       catch() { ... } // from try @ 018e8e1c with catch @ 018e8e2c */
                    /* try { // try from 018e8e30 to 019e8e33 has its CatchHandler @ 018e8e3c */
            lVar13 = (long)(int)local_10c;
                    /* try { // try from 018e8e34 to 019e8e3f has its CatchHandler @ 018e8bb4 */
            uVar19 = *(undefined8 *)(param_1 + 0x28);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 018e8e30 with catch @ 018e8e3c
                        */
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar12 = FUN_0268b4e0(uVar17,uVar19,0);
            if (((uVar12 & 1) != 0) &&
               (uVar12 = FUN_018e889c(param_1,lVar16,uVar6), (uVar12 & 1) != 0)) {
              lVar18 = *(long *)(param_1 + 0x38);
              lVar11 = FUN_0191fc1c(lVar16,0);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (*(uint *)(lVar11 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              lVar13 = *(long *)(lVar11 + lVar13 * 8 + 0x20);
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_012df150(lVar18,*(undefined8 *)(lVar13 + 0x10),
                           *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmq_f64__);
            }
          }
          goto LAB_018e8d14;
        }
        if (plVar9 != (long *)0x0) {
          lVar16 = *plVar9;
          uVar12 = (ulong)*(ushort *)(lVar16 + 0x12a);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)StringLiteral_10310) {
                puVar10 = (undefined8 *)(lVar16 + (long)*piVar14 * 0x10 + 0x138);
                goto Oculus_Interaction_Surfaces_SurfaceHit__set_Point;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar10 = (undefined8 *)FUN_00d59724(plVar9,*(long *)StringLiteral_10310,0);
Oculus_Interaction_Surfaces_SurfaceHit__set_Point:
          (*(code *)*puVar10)(plVar9,puVar10[1]);
        }
      }
      uVar12 = (ulong)*(uint *)(lVar15 + 0x18);
      uVar20 = uVar20 + 1;
    } while ((long)uVar20 < (long)(int)*(uint *)(lVar15 + 0x18));
  }
  FUN_018e8738(param_1);
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


