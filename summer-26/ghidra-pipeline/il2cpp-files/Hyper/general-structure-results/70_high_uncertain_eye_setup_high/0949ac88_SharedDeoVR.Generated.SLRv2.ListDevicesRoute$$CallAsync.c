/*
FUNCTION_NAME: SharedDeoVR.Generated.SLRv2.ListDevicesRoute$$CallAsync
ENTRY_POINT: 0949ac88
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_11;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0949b194) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void SharedDeoVR_Generated_SLRv2_ListDevicesRoute__CallAsync(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 extraout_x1;
  int *piVar12;
  int *unaff_x19;
  long unaff_x20;
  int iVar13;
  undefined1 auVar14 [16];
  long in_stack_00000028;
  int *in_stack_00000030;
  long *in_stack_00000038;
  int in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  int iStack000000000000006c;
  undefined4 *in_stack_00000078;
  
  if ((param_1 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac91008);
    FUN_04947ee4(PTR_DAT_0ac13080);
    FUN_04947ee4(PTR_DAT_0ac13050);
    FUN_04947ee4(PTR_DAT_0ac127f8);
    FUN_04947ee4(PTR_DAT_0ac12800);
    FUN_04947ee4(PTR_DAT_0ac12808);
    FUN_04947ee4(PTR_DAT_0ac09b90);
    FUN_04947ee4(PTR_DAT_0ac107c8);
    FUN_04947ee4(PTR_DAT_0ac90ff0);
    FUN_04947ee4(PTR_DAT_0ac90ff8);
    FUN_04947ee4(PTR_DAT_0ac91000);
    FUN_04947ee4(PTR_DAT_0ac12810);
    *(undefined1 *)(unaff_x20 + 0xc72) = 1;
  }
  puVar3 = PTR_DAT_0ac12810;
  puVar2 = PTR_DAT_0ac12808;
  puVar1 = PTR_DAT_0ac12800;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  iStack000000000000006c = *unaff_x19;
  in_stack_00000048 = 0;
  if (iStack000000000000006c != 0) {
    in_stack_00000028 = 0;
    Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4s>__System_Collections_IEnumerable_GetEnumerator
              (&stack0x00000028,0x80,*(undefined8 *)PTR_DAT_0ac90ff8);
    *(long *)(in_stack_00000078 + 0xc) = in_stack_00000028;
    thunk_FUN_049ee3d8(in_stack_00000078 + 0xc,0);
    in_stack_00000030 = &stack0x0000006c;
    in_stack_00000028 = 0;
    in_stack_00000038 = (long *)&stack0x00000078;
    if (iStack000000000000006c != 0) {
      uVar6 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac107c8);
      FUN_08d21a94(uVar6,0x80,0);
      *(undefined8 *)(in_stack_00000078 + 0xe) = uVar6;
      thunk_FUN_049ee3d8(in_stack_00000078 + 0xe,uVar6);
      if (iStack000000000000006c != 0) {
        in_stack_00000078[0x10] = 0;
        *(undefined1 *)(in_stack_00000078 + 0x11) = 0;
        goto LAB_0949aed4;
      }
      goto LAB_0949ae10;
    }
  }
  in_stack_00000028 = 0;
  in_stack_00000038 = (long *)&stack0x00000078;
  in_stack_00000030 = &stack0x0000006c;
LAB_0949ae10:
  iStack000000000000006c = -1;
  _in_stack_00000050 = *(undefined1 (*) [16])(in_stack_00000078 + 0x12);
  *(undefined8 *)(in_stack_00000078 + 0x12) = 0;
  *(undefined8 *)(in_stack_00000078 + 0x14) = 0;
  *in_stack_00000078 = 0xffffffff;
  do {
    uVar5 = FUN_08471888(&stack0x00000050,*(undefined8 *)puVar1);
    if ((int)uVar5 < 1) {
LAB_0949af8c:
      plVar7 = *(long **)(in_stack_00000078 + 8);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar8 = (**(code **)(*plVar7 + 0x208))(plVar7,*(undefined8 *)(*plVar7 + 0x210));
      (**(code **)(*plVar7 + 0x218))
                (plVar7,lVar8 - (int)in_stack_00000078[0x10],*(undefined8 *)(*plVar7 + 0x220));
      plVar7 = *(long **)(in_stack_00000078 + 0xe);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      uVar6 = (**(code **)(*plVar7 + 0x418))(plVar7,*(undefined8 *)(*plVar7 + 0x420));
      iVar13 = 0xe;
      goto LAB_0949aff0;
    }
    lVar8 = *(long *)(in_stack_00000078 + 0xc);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar9 = 0;
    do {
      if ((uint)*(undefined8 *)(lVar8 + 0x18) == (uint)uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      if (*(char *)(lVar8 + 0x20 + uVar9) == '\n') {
        *(undefined1 *)(in_stack_00000078 + 0x11) = 1;
        in_stack_00000078[0x10] = ~(uint)uVar9 + uVar5;
        goto LAB_0949aeac;
      }
      uVar9 = uVar9 + 1;
    } while (uVar5 != (uint)uVar9);
    uVar9 = (ulong)uVar5;
LAB_0949aeac:
    plVar7 = *(long **)(in_stack_00000078 + 0xe);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    (**(code **)(*plVar7 + 0x398))(plVar7,lVar8,0,uVar9,*(undefined8 *)(*plVar7 + 0x3a0));
    if (*(char *)(in_stack_00000078 + 0x11) != '\0') goto LAB_0949af8c;
LAB_0949aed4:
    plVar7 = *(long **)(in_stack_00000078 + 8);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar8 = (**(code **)(*plVar7 + 0x2e8))
                      (plVar7,*(undefined8 *)(in_stack_00000078 + 0xc),0,0x80,
                       *(undefined8 *)(in_stack_00000078 + 10),*(undefined8 *)(*plVar7 + 0x2f0));
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    auVar14 = FUN_0775e154(lVar8,0,*(undefined8 *)puVar3);
    _in_stack_00000050 = auVar14;
    uVar9 = FUN_08471840(&stack0x00000050,*(undefined8 *)puVar2);
  } while ((uVar9 & 1) != 0);
  iStack000000000000006c = 0;
  *in_stack_00000078 = 0;
  *(undefined1 (*) [16])(in_stack_00000078 + 0x12) = _in_stack_00000050;
  thunk_FUN_049ee3d8(in_stack_00000078 + 0x12,0);
  puVar4 = in_stack_00000078;
  if (*(int *)(*(long *)PTR_DAT_0ac13050 + 0xe4) == 0) {
    thunk_FUN_049a583c(*(long *)PTR_DAT_0ac13050,extraout_x1,in_stack_00000078);
  }
  FUN_0534a44c(puVar4 + 2,&stack0x00000050,in_stack_00000078,*(undefined8 *)PTR_DAT_0ac91008);
  uVar6 = 0;
  iVar13 = 8;
LAB_0949aff0:
  if ((iStack000000000000006c < 0) &&
     (plVar7 = *(long **)(in_stack_00000078 + 0xe), plVar7 != (long *)0x0)) {
    lVar8 = *plVar7;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0ac09b90) {
          puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0949b060;
        }
        uVar9 = uVar9 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar9 != 0);
    }
    puVar10 = (undefined8 *)FUN_04980e68(plVar7,*(long *)PTR_DAT_0ac09b90,0);
LAB_0949b060:
    (*(code *)*puVar10)(plVar7,puVar10[1]);
  }
  if (*in_stack_00000030 < 0) {
    FUN_0717d768(*in_stack_00000038 + 0x30,*(undefined8 *)PTR_DAT_0ac90ff0);
  }
  if (in_stack_00000028 == 0) {
    if (iVar13 == 0xe) {
      *in_stack_00000078 = 0xfffffffe;
      *(undefined8 *)(in_stack_00000078 + 0xc) = 0;
      *(undefined8 *)(in_stack_00000078 + 0xe) = 0;
      thunk_FUN_049ee3d8(in_stack_00000078 + 0xe,0);
      puVar4 = in_stack_00000078;
      if (*(int *)(*(long *)PTR_DAT_0ac13050 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_07b6c5d8(puVar4 + 2,uVar6,*(undefined8 *)PTR_DAT_0ac13080);
    }
    else if (iVar13 == 0) {
      uVar6 = *(undefined8 *)(&stack0x00000040 + (long)(in_stack_00000048 + -1) * 8);
      *in_stack_00000078 = 0xfffffffe;
      *(undefined8 *)(in_stack_00000078 + 0xc) = 0;
      *(undefined8 *)(in_stack_00000078 + 0xe) = 0;
      thunk_FUN_049ee3d8(in_stack_00000078 + 0xe,0);
      puVar4 = in_stack_00000078;
      lVar8 = thunk_FUN_049ae08c(PTR_DAT_0ac13050);
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar11 = thunk_FUN_049ae08c(PTR_DAT_0ac130d8);
      FUN_07b6c824(puVar4 + 2,uVar6,uVar11);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948184();
}


