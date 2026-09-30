/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_DataStore_GetNumKeys
ENTRY_POINT: 01944698
PROGRAM: Lovesick-libil2cpp.so
SCORE: 99
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8 Oculus_Platform_CAPI__ovr_DataStore_GetNumKeys(undefined8 *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x20;
  long lVar12;
  ulong unaff_x22;
  long *unaff_x25;
  float fVar13;
  float fVar14;
  float fStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  
  while( true ) {
    lVar12 = unaff_x20[0x13];
    FUN_0132138c(param_2,unaff_x22 & 0xffffffff,&stack0x000000b0,*param_1);
    if (lVar12 == 0) break;
    if (*(uint *)(lVar12 + 0x18) <= (uint)unaff_x22) goto LAB_0194499c;
    lVar12 = lVar12 + unaff_x22 * 0x10;
    *(ulong *)(lVar12 + 0x28) = CONCAT44(uStack00000000000000bc,uStack00000000000000b8);
    *(ulong *)(lVar12 + 0x20) = CONCAT44(uStack00000000000000b4,fStack00000000000000b0);
    iVar3 = *(int *)(unaff_x19 + 0x70);
    if (iVar3 % 100 == 0) {
      iVar2 = *(int *)((long)unaff_x20 + 0x24);
      lVar12 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3e18);
      if (lVar12 != 0) {
        FUN_01919300((float)iVar3 / (float)iVar2,lVar12,
                     *(undefined8 *)UnityEngine_UIElements_VisualTreeAsset_UsingEntry_TypeInfo,0);
        *(long *)(unaff_x19 + 0x18) = lVar12;
        uVar8 = 2;
        goto LAB_01944990;
      }
      break;
    }
    uVar1 = iVar3 + 1;
    *(uint *)(unaff_x19 + 0x70) = uVar1;
    puVar4 = OVREyeGaze_TypeInfo;
    if (unaff_x20 == (long *)0x0) break;
    if (*(int *)((long)unaff_x20 + 0x24) <= (int)uVar1) {
      FUN_0194553c();
      plVar5 = (long *)(**(code **)(*unaff_x20 + 600))();
      *(long **)(unaff_x19 + 0x60) = plVar5;
      puVar4 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
      if (plVar5 != (long *)0x0) {
        lVar12 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar9 == 0) goto LAB_0194476c;
        piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        goto LAB_01944754;
      }
      break;
    }
    if (*(long *)(unaff_x19 + 0x38) == 0) break;
    lVar12 = unaff_x20[0xf];
    FUN_0132138c(*(long *)(unaff_x19 + 0x38),uVar1,&stack0x000000b0,
                 *(undefined8 *)OVREyeGaze_TypeInfo);
    if (lVar12 == 0) break;
    if (*(uint *)(lVar12 + 0x18) <= uVar1) goto LAB_0194499c;
    *(float *)(lVar12 + (long)(int)uVar1 * 4 + 0x20) = fStack00000000000000b0;
    if (*(long *)(unaff_x19 + 0x28) == 0) break;
    uVar1 = *(uint *)(unaff_x19 + 0x70);
    lVar12 = unaff_x20[9];
    FUN_0132138c(*(long *)(unaff_x19 + 0x28),uVar1,&stack0x000000b0,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__);
    if (lVar12 == 0) break;
    if (*(uint *)(lVar12 + 0x18) <= uVar1) goto LAB_0194499c;
    lVar12 = lVar12 + (long)(int)uVar1 * 0xc;
    *(ulong *)(lVar12 + 0x20) = CONCAT44(uStack00000000000000b4,fStack00000000000000b0);
    *(undefined4 *)(lVar12 + 0x28) = uStack00000000000000b8;
    lVar12 = unaff_x20[9];
    if (lVar12 == 0) break;
    uVar1 = *(uint *)(unaff_x19 + 0x70);
    if (*(uint *)(lVar12 + 0x18) <= uVar1) goto LAB_0194499c;
    lVar10 = unaff_x20[10];
    if (lVar10 == 0) break;
    if (*(uint *)(lVar10 + 0x18) <= uVar1) goto LAB_0194499c;
    lVar12 = lVar12 + (long)(int)uVar1 * 0xc;
    uVar8 = *(undefined4 *)(lVar12 + 0x28);
    lVar10 = lVar10 + (long)(int)uVar1 * 0x10;
    *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(lVar12 + 0x20);
    *(undefined4 *)(lVar10 + 0x28) = uVar8;
    *(undefined4 *)(lVar10 + 0x2c) = 0;
    lVar12 = unaff_x20[10];
    if (lVar12 == 0) break;
    uVar1 = *(uint *)(unaff_x19 + 0x70);
    if (*(uint *)(lVar12 + 0x18) <= uVar1) goto LAB_0194499c;
    *(undefined4 *)(lVar12 + (long)(int)uVar1 * 0x10 + 0x2c) = 0x3f800000;
    lVar12 = unaff_x20[0x12];
    if (DAT_03774e1c == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774e1c = '\x01';
    }
    if (*(long *)(unaff_x19 + 0x30) == 0) break;
    uVar7 = *(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0xc);
    fVar13 = *(float *)(*(long *)(*unaff_x25 + 0xb8) + 0x14);
    FUN_0132138c(*(long *)(unaff_x19 + 0x30),*(undefined4 *)(unaff_x19 + 0x70),&stack0x000000b0,
                 *(undefined8 *)puVar4);
    if (lVar12 == 0) break;
    if (*(uint *)(lVar12 + 0x18) <= uVar1) goto LAB_0194499c;
    fVar14 = *(float *)(unaff_x20 + 0x23);
    lVar12 = lVar12 + (long)(int)uVar1 * 0xc;
    *(ulong *)(lVar12 + 0x20) =
         CONCAT44((float)((ulong)uVar7 >> 0x20) * fStack00000000000000b0 * fVar14,
                  (float)uVar7 * fStack00000000000000b0 * fVar14);
    *(float *)(lVar12 + 0x28) = fVar13 * fStack00000000000000b0 * fVar14;
    if (*(long *)(unaff_x19 + 0x40) == 0) break;
    uVar1 = *(uint *)(unaff_x19 + 0x70);
    lVar12 = unaff_x20[0x11];
    FUN_0132138c(*(long *)(unaff_x19 + 0x40),uVar1,&stack0x000000b0,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                );
    if (lVar12 == 0) break;
    if (*(uint *)(lVar12 + 0x18) <= uVar1) goto LAB_0194499c;
    *(float *)(lVar12 + (long)(int)uVar1 * 4 + 0x20) = fStack00000000000000b0;
    param_2 = *(long *)(unaff_x19 + 0x48);
    if (param_2 == 0) break;
    unaff_x22 = (ulong)*(int *)(unaff_x19 + 0x70);
    param_1 = (undefined8 *)
              Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<ScrollViewMode>_set_defaultValue__
    ;
  }
  goto LAB_01944208;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar11 = piVar11 + 4;
    if (uVar9 == 0) break;
LAB_01944754:
    if (*(long *)(piVar11 + -2) ==
        *(long *)Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__) {
      puVar6 = (undefined8 *)(lVar12 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_019447d0;
    }
  }
LAB_0194476c:
  puVar6 = (undefined8 *)
           FUN_00d59724(plVar5,*(long *)
                                Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                        ,0);
LAB_019447d0:
  uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
  if ((uVar9 & 1) == 0) {
    if (unaff_x20 != (long *)0x0) {
      plVar5 = (long *)(**(code **)(*unaff_x20 + 0x268))();
      *(long **)(unaff_x19 + 0x68) = plVar5;
      if (plVar5 != (long *)0x0) {
        lVar12 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
              puVar6 = (undefined8 *)(lVar12 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_01944898;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_00d59724(plVar5,*(long *)puVar4,0);
LAB_01944898:
        uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar9 & 1) == 0) {
          if (unaff_x20 != (long *)0x0) {
            lVar12 = unaff_x20[0x26];
            *(undefined4 *)(unaff_x20 + 0x25) = 0;
            if (lVar12 != 0) {
              uVar1 = *(uint *)(lVar12 + 0x18);
              if (0 < (long)((ulong)uVar1 << 0x20)) {
                uVar9 = 0;
                fVar13 = 0.0;
                do {
                  if (uVar1 == uVar9) {
LAB_0194499c:
                    /* WARNING: Subroutine does not return */
                    FUN_00da5194();
                  }
                  lVar10 = uVar9 * 4;
                  uVar9 = uVar9 + 1;
                  fVar13 = *(float *)(lVar12 + 0x20 + lVar10) + fVar13;
                  *(float *)(unaff_x20 + 0x25) = fVar13;
                } while ((long)uVar9 < (long)(int)uVar1);
              }
              return 0;
            }
          }
        }
        else {
          plVar5 = *(long **)(unaff_x19 + 0x68);
          if (plVar5 != (long *)0x0) {
            lVar12 = *plVar5;
            uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar9 != 0) {
              piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
                  puVar6 = (undefined8 *)(lVar12 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                  goto LAB_0194497c;
                }
                uVar9 = uVar9 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar9 != 0);
            }
            puVar6 = (undefined8 *)FUN_00d59724(plVar5,*(long *)puVar4,1);
LAB_0194497c:
            uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
            *(undefined8 *)(unaff_x19 + 0x18) = uVar7;
            uVar8 = 4;
            goto LAB_01944990;
          }
        }
      }
    }
  }
  else {
    plVar5 = *(long **)(unaff_x19 + 0x60);
    if (plVar5 != (long *)0x0) {
      lVar12 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
            puVar6 = (undefined8 *)(lVar12 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_01944954;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_00d59724(plVar5,*(long *)puVar4,1);
LAB_01944954:
      uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      uVar8 = 3;
      *(undefined8 *)(unaff_x19 + 0x18) = uVar7;
LAB_01944990:
      *(undefined4 *)(unaff_x19 + 0x10) = uVar8;
      return 1;
    }
  }
LAB_01944208:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


