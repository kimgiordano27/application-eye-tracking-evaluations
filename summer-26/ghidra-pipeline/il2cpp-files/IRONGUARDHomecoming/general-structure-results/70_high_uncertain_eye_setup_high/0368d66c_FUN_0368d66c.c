/*
FUNCTION_NAME: FUN_0368d66c
ENTRY_POINT: 0368d66c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_6
*/


bool FUN_0368d66c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if ((DAT_04833eb3 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_42__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_43__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_44__);
    DAT_04833eb3 = 1;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uVar13 = param_2[1];
  uVar8 = *param_2;
  param_3[2] = param_2[2];
  param_3[1] = uVar13;
  *param_3 = uVar8;
  plVar5 = (long *)FUN_0368d438(param_1);
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__653_44__;
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__653_43__;
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__653_42__;
  if (plVar5 == (long *)0x0) {
LAB_0368d8a8:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar12 = 0;
  do {
    lVar9 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0368d75c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_0368d75c:
    iVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (iVar4 <= iVar12) {
LAB_0368d880:
      return iVar4 <= iVar12;
    }
    lVar9 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0368d7c0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar3,0);
LAB_0368d7c0:
    plVar7 = (long *)(*(code *)*puVar6)(plVar5,iVar12,puVar6[1]);
    if (plVar7 != (long *)0x0) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_0368d8a8;
      uVar8 = FUN_04070398(*(long *)(param_1 + 0x20),0);
      lVar9 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0368d838;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_0368d838:
      uVar10 = (*(code *)*puVar6)(plVar7,uVar8,&local_78,puVar6[1]);
      if ((uVar10 & 1) != 0) {
        local_80 = param_3[2];
        uStack_88 = param_3[1];
        local_90 = *param_3;
        uVar10 = FUN_03666924(&local_90,&local_78,param_3,0);
        if ((uVar10 & 1) == 0) goto LAB_0368d880;
      }
    }
    iVar12 = iVar12 + 1;
  } while( true );
}


