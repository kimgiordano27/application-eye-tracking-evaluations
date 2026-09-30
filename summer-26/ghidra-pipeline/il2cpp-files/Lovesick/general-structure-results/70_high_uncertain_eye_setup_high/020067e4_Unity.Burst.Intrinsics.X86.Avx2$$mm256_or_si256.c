/*
FUNCTION_NAME: Unity.Burst.Intrinsics.X86.Avx2$$mm256_or_si256
ENTRY_POINT: 020067e4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02006c78) */
/* WARNING: Removing unreachable block (ram,0x02006d64) */
/* WARNING: Removing unreachable block (ram,0x02006ab0) */

long Unity_Burst_Intrinsics_X86_Avx2__mm256_or_si256(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long unaff_x20;
  long lVar13;
  undefined8 uVar14;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(StringLiteral_7507);
  thunk_FUN_00d48444(StringLiteral_10310);
  thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
  thunk_FUN_00d48444(StringLiteral_3724);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<DebugInspector>_MoveNext__);
  thunk_FUN_00d48444(Oculus_Interaction_IInteractor_TypeInfo);
  thunk_FUN_00d48444(Meta_WitAi_Data_Entities_WitEntityData_TypeInfo);
  thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
  thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
  thunk_FUN_00d48444(StringLiteral_7129);
  *(undefined1 *)(unaff_x20 + 0x8a2) = 1;
  puVar5 = StringLiteral_10310;
  puVar2 = PTR_DAT_033ee168;
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    return *(long *)(unaff_x19 + 0x30);
  }
  lVar13 = *(long *)(unaff_x19 + 0x20);
  if (lVar13 != 0) {
    if (*(int *)(*(long *)Method_System_Nullable<OVRPlugin_Result>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar6 = (long *)FUN_01ff6bc0(lVar13);
    if (plVar6 != (long *)0x0) {
      lVar13 = plVar6[9];
      plVar7 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (plVar7 != (long *)0x0) {
        FUN_01743cd4(plVar7,(int)lVar13,0);
        plVar6 = (long *)(**(code **)(*plVar6 + 0x368))(plVar6,*(undefined8 *)(*plVar6 + 0x370));
        puVar4 = StringLiteral_7129;
        puVar3 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
        puVar2 = Meta_WitAi_Data_Entities_WitEntityData_TypeInfo;
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        do {
          lVar10 = *plVar6;
          lVar13 = *(long *)puVar3;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar13) {
                puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_02006950;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar8 = (undefined8 *)FUN_00d59724(plVar6,lVar13,0);
LAB_02006950:
          uVar11 = (*(code *)*puVar8)(plVar6,puVar8[1]);
          if ((uVar11 & 1) == 0) {
            plVar6 = (long *)thunk_FUN_00d6225c(plVar6,*(undefined8 *)puVar5);
            if (plVar6 == (long *)0x0) goto LAB_02006ad0;
            lVar13 = *plVar6;
            uVar11 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar11 == 0) goto LAB_02006a7c;
            piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            goto LAB_02006a64;
          }
          lVar10 = *plVar6;
          lVar13 = *(long *)puVar3;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar13) {
                puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                goto LAB_020069b0;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar8 = (undefined8 *)FUN_00d59724(plVar6,lVar13,1);
LAB_020069b0:
          plVar9 = (long *)(*(code *)*puVar8)(plVar6,puVar8[1]);
          if (plVar9 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)puVar2 + 300);
            if ((*(byte *)(*plVar9 + 300) < bVar1) ||
               (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
              FUN_00da544c(plVar9);
            }
          }
          uVar14 = *(undefined8 *)(unaff_x19 + 0x20);
          lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_02006f00(lVar13,plVar9,uVar14);
          (**(code **)(*plVar7 + 0x308))(plVar7,lVar13,*(undefined8 *)(*plVar7 + 0x310));
        } while( true );
      }
    }
    goto LAB_02006d60;
  }
  plVar7 = (long *)thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033ee168);
  if (plVar7 == (long *)0x0) goto LAB_02006d60;
  FUN_01743cd4(plVar7,1,0);
  goto LAB_02006ad0;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_02006c2c:
    if (*(long *)(piVar12 + -2) == *(long *)puVar5) {
      puVar8 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_02006c60;
    }
  }
LAB_02006c44:
  puVar8 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar5,0);
LAB_02006c60:
  (*(code *)*puVar8)(plVar6,puVar8[1]);
LAB_02006c6c:
  uVar14 = *(undefined8 *)Oculus_Interaction_IInteractor_TypeInfo;
  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar14 = FUN_01780344(uVar14,0);
  if (plVar7 != (long *)0x0) {
    lVar13 = (**(code **)(*plVar7 + 0x428))(plVar7,uVar14,*(undefined8 *)(*plVar7 + 0x430));
    if (lVar13 == 0) {
      lVar10 = 0;
    }
    else {
      uVar14 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<DebugInspector>_MoveNext__;
      lVar10 = thunk_FUN_00d6225c(lVar13,uVar14);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(lVar13,uVar14);
      }
    }
    lVar13 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3724);
    if (lVar13 != 0) {
      FUN_01fdf08c(lVar13,lVar10,1,0);
      *(long *)(unaff_x19 + 0x30) = lVar13;
      return lVar13;
    }
  }
  goto LAB_02006d60;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_02006a64:
    if (*(long *)(piVar12 + -2) == *(long *)puVar5) {
      puVar8 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_02006a98;
    }
  }
LAB_02006a7c:
  puVar8 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar5,0);
LAB_02006a98:
  (*(code *)*puVar8)(plVar6,puVar8[1]);
LAB_02006ad0:
  FUN_02006720();
  plVar6 = *(long **)(unaff_x19 + 0x28);
  if (plVar6 != (long *)0x0) {
    plVar6 = (long *)(**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
    puVar3 = StringLiteral_7507;
    puVar2 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar10 = *plVar6;
      lVar13 = *(long *)puVar2;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar13) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_02006b54;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_00d59724(plVar6,lVar13,0);
LAB_02006b54:
      uVar11 = (*(code *)*puVar8)(plVar6,puVar8[1]);
      if ((uVar11 & 1) == 0) {
        plVar6 = (long *)thunk_FUN_00d6225c(plVar6,*(undefined8 *)puVar5);
        if (plVar6 == (long *)0x0) goto LAB_02006c6c;
        lVar13 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar11 == 0) goto LAB_02006c44;
        piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_02006c2c;
      }
      lVar10 = *plVar6;
      lVar13 = *(long *)puVar2;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar13) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_02006bb4;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_00d59724(plVar6,lVar13,1);
LAB_02006bb4:
      plVar9 = (long *)(*(code *)*puVar8)(plVar6,puVar8[1]);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*plVar9 != *(long *)puVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c();
      }
      uVar14 = FUN_020067b4();
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c(uVar14,uVar14);
      }
      (**(code **)(*plVar7 + 0x318))(plVar7,uVar14,*(undefined8 *)(*plVar7 + 800));
    } while( true );
  }
LAB_02006d60:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


