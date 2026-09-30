/*
FUNCTION_NAME: FUN_017f2fd4
ENTRY_POINT: 017f2fd4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_14;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x017f33bc) */

void FUN_017f2fd4(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  
  if ((DAT_03779297 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Reflection_Emit_ConstructorBuilder_GetParameters__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                      );
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_Sirenix_Utilities_PathUtilities_CanMakeRelative__);
    thunk_FUN_00d48444(StringLiteral_11379);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<NavMeshAgent>_MoveNext__);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModulePhysics_<>c__DisplayClass2_0_<DOMoveY>b__0__)
    ;
    thunk_FUN_00d48444(StringLiteral_13241);
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__DisplayClass38_0_<CreateObjectUsingCreatorWithParameters>b__1__
                      );
    thunk_FUN_00d48444(Method_Newtonsoft_Json_JsonWriter_SetWriteStateAsync__);
    thunk_FUN_00d48444(PTR_DAT_033f49c8);
    DAT_03779297 = 1;
  }
  lVar14 = *(long *)(param_1 + 0x18);
  thunk_FUN_00d8e500();
  if (lVar14 == 0) {
    lVar14 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_13241);
    if (lVar14 == 0) goto LAB_017f33b4;
    FUN_01328634(lVar14,1,*(undefined8 *)
                           Method_DG_Tweening_DOTweenModulePhysics_<>c__DisplayClass2_0_<DOMoveY>b__0__
                );
    thunk_FUN_00d8e500();
    *(long *)(param_1 + 0x18) = lVar14;
  }
  puVar2 = Method_Sirenix_Utilities_PathUtilities_CanMakeRelative__;
  puVar3 = Method_Newtonsoft_Json_JsonWriter_SetWriteStateAsync__;
  if (param_2 == (long *)0x0) {
LAB_017f3128:
    plVar6 = (long *)thunk_FUN_00d6225c(param_2,*(undefined8 *)
                                                 Method_Sirenix_Utilities_PathUtilities_CanMakeRelative__
                                       );
    if (plVar6 != (long *)0x0) {
      lVar11 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_017f31a4;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar2,0);
LAB_017f31a4:
      puVar5 = StringLiteral_10310;
      plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
      puVar4 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
      puVar2 = Method_System_Collections_Generic_List_Enumerator<NavMeshAgent>_MoveNext__;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      do {
        lVar11 = *plVar6;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
              puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_017f321c;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar4,0);
LAB_017f321c:
        uVar12 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar12 & 1) == 0) {
          if (plVar6 == (long *)0x0) goto LAB_017f332c;
          lVar11 = *plVar6;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar12 == 0) goto LAB_017f32e0;
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_017f32c8;
        }
        lVar11 = *plVar6;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_017f3278;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar2,0);
LAB_017f3278:
        uVar8 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        uVar8 = FUN_0169f738(uVar8,0);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c(uVar8,uVar8);
        }
        FUN_01328e10(lVar14,uVar8,*(undefined8 *)puVar3);
      } while( true );
    }
    lVar11 = thunk_FUN_00d6225c(param_2,*(undefined8 *)StringLiteral_11379);
    if (lVar11 == 0) {
      thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
      uVar8 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      uVar9 = thunk_FUN_00d48444(System_Uri_MoreInfo_TypeInfo);
      uVar10 = thunk_FUN_00d48444(Oculus_Interaction_Grab_GrabSurfaces_CylinderSurfaceData_TypeInfo)
      ;
      FUN_016ec624(uVar8,uVar9,uVar10,0);
      uVar9 = thunk_FUN_00d48444(DG_Tweening_DOTweenModuleAudio_<>c__DisplayClass0_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar8,uVar9);
    }
    if (lVar14 == 0) {
LAB_017f33b4:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01329040(lVar14,lVar11,
                 *(undefined8 *)
                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__DisplayClass38_0_<CreateObjectUsingCreatorWithParameters>b__1__
                );
  }
  else {
    lVar11 = *param_2;
    bVar1 = *(byte *)(*(long *)
                       Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                     + 300);
    if ((*(byte *)(lVar11 + 300) < bVar1) ||
       (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)
         Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
       )) {
      if (lVar11 != *(long *)Method_System_Reflection_Emit_ConstructorBuilder_GetParameters__)
      goto LAB_017f3128;
      if (lVar14 == 0) goto LAB_017f33b4;
      uVar8 = *(undefined8 *)Method_Newtonsoft_Json_JsonWriter_SetWriteStateAsync__;
    }
    else {
      param_2 = (long *)FUN_0169f738(param_2,0);
      if (lVar14 == 0) goto LAB_017f33b4;
      uVar8 = *(undefined8 *)puVar3;
    }
    FUN_01328e10(lVar14,param_2,uVar8);
  }
LAB_017f3370:
  if (0 < *(int *)(lVar14 + 0x18)) {
    FUN_017f34e0(param_1);
    return;
  }
  return;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_017f32c8:
    if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
      puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_017f3320;
    }
  }
LAB_017f32e0:
  puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar5,0);
LAB_017f3320:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_017f332c:
  if (lVar14 == 0) goto LAB_017f33b4;
  goto LAB_017f3370;
}


