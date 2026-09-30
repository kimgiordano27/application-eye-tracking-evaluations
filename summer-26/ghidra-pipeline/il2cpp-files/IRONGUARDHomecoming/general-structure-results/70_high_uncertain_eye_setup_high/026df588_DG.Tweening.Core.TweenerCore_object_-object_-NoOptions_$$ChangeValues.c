/*
FUNCTION_NAME: DG.Tweening.Core.TweenerCore<object,-object,-NoOptions>$$ChangeValues
ENTRY_POINT: 026df588
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x026df7f0) */

void DG_Tweening_Core_TweenerCore<object,_object,_NoOptions>__ChangeValues
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  void *__src;
  long lVar5;
  long lVar6;
  ulong in_x9;
  int *in_x10;
  int *piVar7;
  long unaff_x19;
  size_t unaff_x21;
  undefined8 *unaff_x23;
  void *unaff_x24;
  long *unaff_x25;
  long *plVar8;
  long *unaff_x28;
  long unaff_x29;
  
code_r0x026df588:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_026df57c;
LAB_026df594:
  puVar2 = (undefined8 *)FUN_01ecb238();
  do {
    uVar3 = (*(code *)*puVar2)();
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if ((uVar3 & 1) == 0) {
      plVar8 = (long *)thunk_FUN_01f116d0();
      if (plVar8 == (long *)0x0) goto LAB_026df7b0;
      lVar5 = *plVar8;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 == 0) goto LAB_026df788;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *unaff_x25;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x28) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_026df610;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_026df610:
    uVar4 = (*(code *)*puVar2)();
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    __src = (void *)FUN_01f08934(uVar4,lVar5);
    memcpy(unaff_x24,__src,unaff_x21);
    puVar2 = (undefined8 *)thunk_FUN_01ee7388();
    plVar8 = (long *)*puVar2;
    memcpy(unaff_x23,unaff_x24,unaff_x21);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar5 = *(long *)(lVar6 + 0x38);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
      lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    puVar2 = unaff_x23;
    if (-1 < *(int *)(*(long *)(lVar6 + 0x10) + 0x28)) {
      puVar2 = (undefined8 *)*unaff_x23;
    }
    lVar6 = *plVar8;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar5) {
          lVar5 = lVar6 + (long)(*piVar7 + 2) * 0x10 + 0x138;
          goto LAB_026df564;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    lVar5 = FUN_01ecb238(plVar8,lVar5,2);
LAB_026df564:
    *(undefined8 **)(unaff_x29 + -0x10) = puVar2;
    lVar5 = *(long *)(lVar5 + 8);
    (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar8,unaff_x29 + -0x10,puVar2);
    param_1 = *unaff_x25;
    param_3 = *unaff_x28;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_026df594;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_026df57c:
    if (*(long *)(in_x10 + -2) != param_3) goto code_r0x026df588;
    puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar7 = piVar7 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_026df7a4;
    }
  }
LAB_026df788:
  puVar2 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar1,0);
LAB_026df7a4:
  (*(code *)*puVar2)(plVar8,puVar2[1]);
LAB_026df7b0:
  if (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


