/*
FUNCTION_NAME: FUN_05c42dec
ENTRY_POINT: 05c42dec
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint FUN_05c42dec(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  if ((DAT_06dc2837 & 1) == 0) {
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_Add__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<Type,_MonoCustomAttrs_AttributeInfo>__ctor__
                );
    DAT_06dc2837 = 1;
  }
  puVar3 = Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_Add__;
  puVar2 = Method_System_Collections_Generic_Dictionary<Type,_MonoCustomAttrs_AttributeInfo>__ctor__
  ;
  if ((param_1 != 0) && (lVar9 = *(long *)(param_1 + 0x78), lVar9 != 0)) {
    lVar11 = (long)*(int *)(param_1 + 0x94);
    do {
      uVar5 = (uint)*(undefined8 *)(lVar9 + 0x18);
      if ((int)uVar5 <= lVar11) {
        FUN_05c4d028(param_1,0,1,0);
        uVar5 = 0;
LAB_05c42fa8:
        return uVar5 & 1;
      }
      *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
      if (uVar5 <= (uint)lVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      uVar1 = *(undefined4 *)(param_1 + 0x80);
      uVar10 = *(undefined8 *)(lVar9 + lVar11 * 8 + 0x20);
      uVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
      FUN_05cd8830(uVar6,uVar10,uVar1,0);
      *(undefined8 *)(param_1 + 0x48) = uVar6;
      LeanTween__value(param_1 + 0x48,uVar6);
      plVar7 = *(long **)(param_1 + 0x48);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar9 = *(long *)(param_1 + 0x30);
      iVar4 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if ((*(int *)(lVar9 + 0x20) == iVar4) ||
         (((iVar4 == 2 && (*(int *)(lVar9 + 0x20) == 0x17)) &&
          (uVar8 = FUN_05c3e634(lVar9), (uVar8 & 1) != 0)))) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar5 = FUN_05c42928(param_1);
        goto LAB_05c42fa8;
      }
      lVar9 = *(long *)(param_1 + 0x78);
      lVar11 = lVar11 + 1;
    } while (lVar9 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


