/*
FUNCTION_NAME: FUN_0368ac3c
ENTRY_POINT: 0368ac3c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_0368ac3c(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if ((DAT_04833ea0 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_IO_FileSystem_RemoveDirectory__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_12__);
    DAT_04833ea0 = 1;
  }
  plVar7 = *(long **)(param_1 + 0x80);
  if (plVar7 == (long *)0x0) goto LAB_0368ae44;
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)Method_OVRPlugin_<>c_<_cctor>b__653_12__) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_0368acd0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)Method_OVRPlugin_<>c_<_cctor>b__653_12__,0);
LAB_0368acd0:
  plVar7 = (long *)(*(code *)*puVar3)(plVar7,puVar3[1]);
  if (plVar7 == (long *)0x0) goto LAB_0368ae44;
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)Method_System_IO_FileSystem_RemoveDirectory__) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 6) * 0x10 + 0x138);
        goto LAB_0368ad3c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)Method_System_IO_FileSystem_RemoveDirectory__,6);
LAB_0368ad3c:
  uVar1 = (*(code *)*puVar3)(plVar7,puVar3[1]);
  switch(uVar1) {
  case 0:
    plVar7 = *(long **)(param_1 + 0x38);
    if (plVar7 == (long *)0x0) goto LAB_0368ae44;
    lVar4 = *plVar7;
    uVar9 = *(undefined4 *)(param_1 + 0x68);
    uVar10 = *(undefined4 *)(param_1 + 0x6c);
    uVar1 = *(undefined4 *)(param_1 + 0x60);
    uVar8 = *(undefined4 *)(param_1 + 100);
    break;
  case 1:
    plVar7 = *(long **)(param_1 + 0x38);
    if (plVar7 == (long *)0x0) goto LAB_0368ae44;
    lVar4 = *plVar7;
    uVar9 = *(undefined4 *)(param_1 + 0x58);
    uVar10 = *(undefined4 *)(param_1 + 0x5c);
    uVar1 = *(undefined4 *)(param_1 + 0x50);
    uVar8 = *(undefined4 *)(param_1 + 0x54);
    break;
  case 2:
    plVar7 = *(long **)(param_1 + 0x38);
    if (plVar7 == (long *)0x0) goto LAB_0368ae44;
    lVar4 = *plVar7;
    uVar9 = *(undefined4 *)(param_1 + 0x48);
    uVar10 = *(undefined4 *)(param_1 + 0x4c);
    uVar1 = *(undefined4 *)(param_1 + 0x40);
    uVar8 = *(undefined4 *)(param_1 + 0x44);
    break;
  case 3:
    plVar7 = *(long **)(param_1 + 0x38);
    if (plVar7 == (long *)0x0) goto LAB_0368ae44;
    lVar4 = *plVar7;
    uVar9 = *(undefined4 *)(param_1 + 0x78);
    uVar10 = *(undefined4 *)(param_1 + 0x7c);
    uVar1 = *(undefined4 *)(param_1 + 0x70);
    uVar8 = *(undefined4 *)(param_1 + 0x74);
    break;
  default:
    goto switchD_0368ad68_default;
  }
  (**(code **)(lVar4 + 0x2a8))(uVar1,uVar8,uVar9,uVar10,plVar7,*(undefined8 *)(lVar4 + 0x2b0));
switchD_0368ad68_default:
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar4 = FUN_040703d4(*(long *)(param_1 + 0x20),0);
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (iVar2 = FUN_0407eaa0(*(long *)(param_1 + 0x20),0), lVar4 != 0)) {
      FUN_04073314(lVar4,0 < iVar2,0);
      if ((*(long *)(param_1 + 0x28) != 0) &&
         (lVar4 = FUN_040703d4(*(long *)(param_1 + 0x28),0), lVar4 != 0)) {
        FUN_04073314(lVar4,*(char *)(param_1 + 0x88) == '\0',0);
        return;
      }
    }
  }
LAB_0368ae44:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


