/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMapGPU.<InitUpdateGradientTexture>d__79$$MoveNext
ENTRY_POINT: 014a68cc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_12;ray_or_cast_sink_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x014a6564) */

void Meta_XR_MRUtilityKit_SpaceMapGPU_<InitUpdateGradientTexture>d__79__MoveNext(void)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long *plVar15;
  long *unaff_x26;
  undefined8 *unaff_x27;
  ulong in_stack_00000020;
  long in_stack_00000028;
  ulong in_stack_00000030;
  long in_stack_00000038;
  
  thunk_FUN_00d48444();
  DAT_03776dd1 = 1;
  lVar5 = *(long *)
           Method_System_Collections_Generic_KeyValuePair<LabelTarget,_LabelInfo>_get_Value__;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar5 = *(long *)
             Method_System_Collections_Generic_KeyValuePair<LabelTarget,_LabelInfo>_get_Value__;
  }
  if (unaff_x26 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  plVar15 = (long *)**(undefined8 **)(lVar5 + 0xb8);
  uVar6 = (**(code **)(*unaff_x26 + 0x188))();
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar5 = thunk_FUN_00d48444(StringLiteral_11440);
  uVar7 = thunk_FUN_00d48444(StringLiteral_7842);
  uVar8 = thunk_FUN_00d48444(
                            Method_DG_Tweening_DOTweenModulePhysics_<>c__DisplayClass4_0_<DORotate>b__0__
                            );
  lVar12 = *plVar15;
  uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == lVar5) {
        puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 9) * 0x10 + 0x138);
        goto LAB_014a69a4;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar9 = (undefined8 *)FUN_00d59724(plVar15,lVar5,9);
LAB_014a69a4:
  (*(code *)*puVar9)(plVar15,uVar6,0,0,0,0,uVar7,uVar8);
LAB_014a69d8:
  do {
    uVar13 = (ulong)*(uint *)(in_stack_00000038 + 0x18);
    in_stack_00000030 = in_stack_00000030 + 1;
    if ((long)(int)*(uint *)(in_stack_00000038 + 0x18) <= (long)in_stack_00000030) {
      do {
        puVar2 = Method_System_Collections_Generic_KeyValuePair<LabelTarget,_LabelInfo>_get_Value__;
        in_stack_00000020 = in_stack_00000020 + 1;
        if ((long)(int)*(uint *)(in_stack_00000028 + 0x18) <= (long)in_stack_00000020) {
          lVar5 = *(long *)
                   Method_System_Collections_Generic_KeyValuePair<LabelTarget,_LabelInfo>_get_Value__
          ;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar5 = *(long *)puVar2;
          }
          *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8) = unaff_x19;
          return;
        }
        if (*(uint *)(in_stack_00000028 + 0x18) <= in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar15 = *(long **)(in_stack_00000028 + in_stack_00000020 * 8 + 0x20);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        in_stack_00000038 =
             (**(code **)(*plVar15 + 0x238))(plVar15,*(undefined8 *)(*plVar15 + 0x240));
        if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      } while ((int)*(ulong *)(in_stack_00000038 + 0x18) < 1);
      in_stack_00000030 = 0;
      uVar13 = *(ulong *)(in_stack_00000038 + 0x18) & 0xffffffff;
    }
    if (uVar13 <= in_stack_00000030) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    lVar5 = *(long *)(in_stack_00000038 + in_stack_00000030 * 8 + 0x20);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar12 = FUN_0178c5b0(lVar5,0);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  } while ((int)*(ulong *)(lVar12 + 0x18) < 1);
  uVar13 = 0;
  uVar10 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
LAB_014a60d0:
  if (uVar10 <= uVar13) {
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  uVar6 = *(undefined8 *)(lVar12 + uVar13 * 8 + 0x20);
  uVar7 = *(undefined8 *)Method_Meta_WitAi_VoiceService_set_UsePlatformIntegrations__;
  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar7 = FUN_01780344(uVar7,0);
  plVar15 = (long *)FUN_016b2cb0(uVar6,uVar7,0);
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar11 = *plVar15;
  uVar10 = (ulong)*(ushort *)(lVar11 + 0x12a);
  if (uVar10 != 0) {
    piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)Method_OVRSpatialAnchor_UnboundAnchor_get_Pose__) {
        puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_014a6184;
      }
      uVar10 = uVar10 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar10 != 0);
  }
  puVar9 = (undefined8 *)
           FUN_00d59724(plVar15,*(long *)Method_OVRSpatialAnchor_UnboundAnchor_get_Pose__,0);
LAB_014a6184:
  plVar15 = (long *)(*(code *)*puVar9)(plVar15,puVar9[1]);
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  do {
    lVar11 = *plVar15;
    uVar10 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar10 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x21) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_014a61e4;
        }
        uVar10 = uVar10 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar10 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724(plVar15,*unaff_x21,0);
LAB_014a61e4:
    uVar10 = (*(code *)*puVar9)(plVar15,puVar9[1]);
    if ((uVar10 & 1) == 0) break;
    lVar11 = *plVar15;
    uVar10 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar10 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) ==
            *(long *)UnityEngine_UIElements_UIR_Implementation_CommandGenerator_TypeInfo) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_014a6248;
        }
        uVar10 = uVar10 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar10 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_00d59724(plVar15,*(long *)
                                   UnityEngine_UIElements_UIR_Implementation_CommandGenerator_TypeInfo
                          ,0);
LAB_014a6248:
    plVar3 = (long *)(*(code *)*puVar9)(plVar15,puVar9[1]);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    bVar1 = *(byte *)(*(long *)System_IO_MonoIO_TypeInfo + 300);
    if ((*(byte *)(*plVar3 + 300) < bVar1) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_IO_MonoIO_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(plVar3);
    }
    lVar11 = FUN_0129210c();
    lVar4 = thunk_FUN_00d62348(*unaff_x20);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_017b46ec(lVar4,0);
    *(long *)(lVar4 + 0x10) = lVar5;
    *(undefined8 *)(lVar4 + 0x18) = uVar6;
    *(long **)(lVar4 + 0x20) = plVar3;
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_00bc397c(lVar11,lVar4,*unaff_x27);
  } while( true );
  if (plVar15 != (long *)0x0) {
    lVar11 = *plVar15;
    uVar10 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar10 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)StringLiteral_10310) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_014a64ec;
        }
        uVar10 = uVar10 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar10 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724(plVar15,*(long *)StringLiteral_10310,0);
LAB_014a64ec:
    (*(code *)*puVar9)(plVar15,puVar9[1]);
  }
  uVar10 = (ulong)*(uint *)(lVar12 + 0x18);
  uVar13 = uVar13 + 1;
  if ((long)(int)*(uint *)(lVar12 + 0x18) <= (long)uVar13) goto LAB_014a69d8;
  goto LAB_014a60d0;
}


