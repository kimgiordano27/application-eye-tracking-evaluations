/*
FUNCTION_NAME: FUN_06015260
ENTRY_POINT: 06015260
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_8
*/


void FUN_06015260(long param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int iVar11;
  
  if ((DAT_06bc533c & 1) == 0) {
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_141__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_142__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_143__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_144__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_145__);
    DAT_06bc533c = 1;
  }
  lVar5 = *(long *)(param_1 + 0x38);
  *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_1 + 0x30);
  puVar4 = Method_OVRPlugin_<>c_<_cctor>b__837_145__;
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__837_144__;
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__837_143__;
  if (lVar5 != 0) {
    iVar11 = 0;
    do {
      if (*(int *)(lVar5 + 0x20) <= iVar11) {
        lVar5 = *(long *)(param_1 + 0x40);
        if (lVar5 != 0) {
          iVar11 = 0;
          goto LAB_0601539c;
        }
        break;
      }
      plVar6 = (long *)FUN_04e383a4(lVar5,iVar11,*(undefined8 *)puVar3);
      if (plVar6 == (long *)0x0) break;
      lVar8 = *plVar6;
      uVar1 = *(undefined2 *)(param_1 + 0x32);
      lVar5 = *(long *)puVar4;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar5) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_0601536c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_02f421d0(plVar6,lVar5,1);
LAB_0601536c:
      (*(code *)*puVar7)(plVar6,uVar1,param_2,puVar7[1]);
      lVar5 = *(long *)(param_1 + 0x38);
      iVar11 = iVar11 + 1;
    } while (lVar5 != 0);
  }
  goto thunk_FUN_02f089c8;
LAB_0601539c:
  do {
    if (*(int *)(lVar5 + 0x20) <= iVar11) {
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined1 *)(param_1 + 0x5d) = 0;
      return;
    }
    plVar6 = (long *)FUN_04e383a4(lVar5,iVar11,*(undefined8 *)puVar2);
    if (plVar6 == (long *)0x0) break;
    lVar8 = *plVar6;
    uVar1 = *(undefined2 *)(param_1 + 0x32);
    lVar5 = *(long *)puVar4;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar5) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_06015410;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_02f421d0(plVar6,lVar5,1);
LAB_06015410:
    (*(code *)*puVar7)(plVar6,uVar1,param_2,puVar7[1]);
    lVar5 = *(long *)(param_1 + 0x40);
    iVar11 = iVar11 + 1;
  } while (lVar5 != 0);
thunk_FUN_02f089c8:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


