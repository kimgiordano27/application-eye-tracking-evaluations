/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$Raycast
ENTRY_POINT: 04c2bd3c
PROGRAM: hellodot-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ray_or_cast_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04c2bf60) */

void Meta_XR_EnvironmentDepthRaycaster__Raycast(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined1 in_w8;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  int *unaff_x19;
  long unaff_x20;
  long *plVar6;
  int iVar7;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  
  *(undefined1 *)(unaff_x20 + 0x6d2) = in_w8;
  puVar1 = PTR_DAT_065c84d8;
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  iVar7 = *unaff_x19;
  if (iVar7 == 0) {
    _uStack0000000000000020 = *(undefined1 (*) [16])(unaff_x19 + 0xe);
    iVar7 = -1;
    unaff_x19[0xe] = 0;
    unaff_x19[0xf] = 0;
    unaff_x19[0x10] = 0;
    unaff_x19[0x11] = 0;
    *unaff_x19 = -1;
  }
  else {
    if (iVar7 == 1) {
      _uStack0000000000000010 = *(undefined1 (*) [16])(unaff_x19 + 0x12);
      iVar7 = -1;
      unaff_x19[0x12] = 0;
      unaff_x19[0x13] = 0;
      unaff_x19[0x14] = 0;
      unaff_x19[0x15] = 0;
      *unaff_x19 = -1;
      _uStack0000000000000020 = ZEXT816(0);
      goto LAB_04c2be28;
    }
    plVar6 = *(long **)(unaff_x19 + 8);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar3 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    _uStack0000000000000020 = FUN_0404bcb8(lVar3,0,*(undefined8 *)PTR_DAT_065e1758);
    uVar4 = FUN_044a8fc8(&stack0x00000020,*(undefined8 *)PTR_DAT_065e1750);
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined1 (*) [16])(unaff_x19 + 0xe) = _uStack0000000000000020;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_0335ffe0(unaff_x19 + 2,&stack0x00000020);
      return;
    }
  }
  lVar3 = FUN_044a9014(&stack0x00000020,*(undefined8 *)PTR_DAT_065e1748);
  *(long *)(unaff_x19 + 0xc) = lVar3;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar3 = FUN_04eb8d04(lVar3,*(undefined8 *)(unaff_x19 + 10),0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  _uStack0000000000000010 = FUN_04fa5130(lVar3,0,0);
  uVar4 = FUN_04e5bb90(&stack0x00000010,0);
  if ((uVar4 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined1 (*) [16])(unaff_x19 + 0x12) = _uStack0000000000000010;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_033631c8(unaff_x19 + 2,&stack0x00000010);
    return;
  }
LAB_04c2be28:
  FUN_04e5bbac(&stack0x00000010,0);
  if ((iVar7 < 0) && (plVar6 = *(long **)(unaff_x19 + 0xc), plVar6 != (long *)0x0)) {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_065c8a48) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_04c2bf14;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c(plVar6,*(long *)PTR_DAT_065c8a48,0);
LAB_04c2bf14:
    (*(code *)*puVar2)(plVar6,puVar2[1]);
  }
  unaff_x19[0xc] = 0;
  unaff_x19[0xd] = 0;
  *unaff_x19 = -2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_04e5a1e4(unaff_x19 + 2,0);
  return;
}


