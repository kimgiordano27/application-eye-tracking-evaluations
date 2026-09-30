/*
FUNCTION_NAME: FUN_01f5e1e0
ENTRY_POINT: 01f5e1e0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_01f5e1e0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 long param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  
  if ((DAT_037803cf & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UI_InputField_<CaretBlink>d__172_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_EventSystems_ExecuteEvents_Execute<ISubmitHandler>__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Type>_Add__);
    thunk_FUN_00d48444(Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__);
    DAT_037803cf = 1;
  }
  FUN_01f5de10(param_1,param_7);
  if ((param_3 == 0) || (*(int *)(param_3 + 0x10) == 0)) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Type>_Add__);
    FUN_00acb0a4();
    uVar4 = thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponents<MeshCollider>__);
    uVar4 = FUN_01f5e59c(param_3,uVar4);
    uVar5 = thunk_FUN_00d48444(UnityEngine_GUITargetAttribute_var);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar4,uVar5);
  }
  if (*(int *)(*(long *)Method_System_Collections_Generic_List<Type>_Add__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar1 = Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__;
  uVar4 = FUN_01f5e668(param_3);
  iVar3 = FUN_016047a8(uVar4,0x3a,0);
  plVar11 = *(long **)(param_1 + 0x20);
  lVar8 = *(long *)(param_1 + 0x28);
  if (iVar3 == -1) {
    if (plVar11 == (long *)0x0) goto LAB_01f5e554;
    uVar4 = (**(code **)(*plVar11 + 0x198))(plVar11,param_3,*(undefined8 *)(*plVar11 + 0x1a0));
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar6 == 0) goto LAB_01f5e554;
    FUN_01f75de4(lVar6,uVar4,0);
  }
  else {
    uVar4 = FUN_01601d40(param_3,0,iVar3,0);
    if (plVar11 == (long *)0x0) goto LAB_01f5e554;
    uVar4 = (**(code **)(*plVar11 + 0x198))(plVar11,uVar4,*(undefined8 *)(*plVar11 + 0x1a0));
    plVar11 = *(long **)(param_1 + 0x20);
    uVar5 = FUN_01603ec8(param_3,iVar3 + 1,0);
    if (plVar11 == (long *)0x0) goto LAB_01f5e554;
    uVar5 = (**(code **)(*plVar11 + 0x198))(plVar11,uVar5,*(undefined8 *)(*plVar11 + 0x1a0));
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar6 == 0) goto LAB_01f5e554;
    FUN_01f75d58(lVar6,uVar4,uVar5,0);
  }
  if (lVar8 != 0) {
    *(long *)(lVar8 + 0x30) = lVar6;
    if ((param_5 != 0) && (0 < *(int *)(param_5 + 0x10))) {
      iVar3 = FUN_01f5e7c4(param_1 + 0x30,param_5);
      if (-1 < iVar3) {
        FUN_01f5e89c(param_1,*(undefined4 *)(param_1 + 0x5c),param_5,iVar3);
      }
      *(long *)(param_1 + 0x38) = param_5;
    }
    if ((param_4 != 0) && (0 < *(int *)(param_4 + 0x10))) {
      iVar3 = FUN_01f5e918(param_1 + 0x30,param_4);
      if (-1 < iVar3) {
        FUN_01f5e89c(param_1,*(undefined4 *)(param_1 + 0x5c),param_4,iVar3);
      }
      *(long *)(param_1 + 0x40) = param_4;
    }
    puVar1 = 
    Method_UnityEngine_UI_InputField_<CaretBlink>d__172_System_Collections_IEnumerator_Reset__;
    if ((param_6 != 0) && (0 < *(int *)(param_6 + 0x10))) {
      plVar11 = *(long **)(param_1 + 0x10);
      if (plVar11 == (long *)0x0) goto LAB_01f5e554;
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)
               Method_UnityEngine_UI_InputField_<CaretBlink>d__172_System_Collections_IEnumerator_Reset__
             ) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0x15) * 0x10 + 0x138);
            goto LAB_01f5e464;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_00d59724(plVar11,*(long *)
                                     Method_UnityEngine_UI_InputField_<CaretBlink>d__172_System_Collections_IEnumerator_Reset__
                            ,0x15);
LAB_01f5e464:
      (*(code *)*puVar7)(plVar11,param_2,param_6,puVar7[1]);
      *(undefined1 *)(param_1 + 0x89) = 1;
    }
    puVar2 = Method_UnityEngine_EventSystems_ExecuteEvents_Execute<ISubmitHandler>__;
    plVar11 = *(long **)(param_1 + 0x10);
    if (plVar11 != (long *)0x0) {
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_01f5e4e0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar1,2);
LAB_01f5e4e0:
      plVar11 = (long *)(*(code *)*puVar7)(plVar11,puVar7[1]);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      uVar9 = FUN_01fc427c(plVar11,0,0);
      if ((uVar9 & 1) != 0) {
        if (plVar11 == (long *)0x0) goto LAB_01f5e554;
        uVar4 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
        *(undefined8 *)(param_1 + 0xa8) = uVar4;
      }
      *(undefined1 *)(param_1 + 0x88) = 1;
      return;
    }
  }
LAB_01f5e554:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


