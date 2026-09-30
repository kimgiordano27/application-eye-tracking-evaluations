/*
FUNCTION_NAME: OVRPlugin.Media$$SyncMrcFrame
ENTRY_POINT: 0515f12c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0515f414) */

long OVRPlugin_Media__SyncMrcFrame(long *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  long *unaff_x19;
  long unaff_x20;
  
  uVar8 = (**(code **)(*param_1 + 0x328))(param_1,*(undefined8 *)(*param_1 + 0x330));
  puVar4 = PTR_DAT_0677d900;
  if ((uVar8 & 1) != 0) {
    plVar9 = *(long **)(unaff_x20 + 0x10);
    if ((plVar9 != (long *)0x0) &&
       (plVar9 = (long *)(**(code **)(*plVar9 + 0x1f8))(plVar9,*(undefined8 *)(*plVar9 + 0x200)),
       plVar9 != (long *)0x0)) {
      uVar7 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
      uVar10 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067823c8);
      FUN_03aabcd0(uVar10,uVar7,*(undefined8 *)PTR_DAT_067823c0);
                    /* try { // try from 0515f19c to 0525f1a3 has its CatchHandler @ 0515f400 */
      *(undefined8 *)(unaff_x20 + 0x18) = uVar10;
      thunk_FUN_02dd37b4();
      plVar9 = *(long **)(unaff_x20 + 0x10);
                    /* try { // try from 0515f1b0 to 0525f1bf has its CatchHandler @ 0515f3f4 */
      if ((plVar9 != (long *)0x0) &&
         (plVar9 = (long *)(**(code **)(*plVar9 + 0x1f8))(plVar9,*(undefined8 *)(*plVar9 + 0x200)),
         plVar9 != (long *)0x0)) {
        plVar9 = (long *)(**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
        puVar6 = PTR_DAT_067823d0;
        puVar5 = PTR_DAT_067823b8;
        puVar4 = PTR_DAT_0675f3d8;
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        do {
          lVar14 = *plVar9;
          lVar13 = *(long *)puVar4;
          uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar8 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar13) {
                puVar11 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_0515f234;
              }
              uVar8 = uVar8 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar8 != 0);
          }
          puVar11 = (undefined8 *)FUN_02d9a5d4(plVar9,lVar13,0);
LAB_0515f234:
          uVar8 = (*(code *)*puVar11)(plVar9,puVar11[1]);
          puVar3 = PTR_DAT_0675f3d0;
          if ((uVar8 & 1) == 0) {
            plVar9 = (long *)thunk_FUN_02d9d438(plVar9,*(undefined8 *)PTR_DAT_0675f3d0);
            if (plVar9 == (long *)0x0) goto LAB_0515f3e8;
            lVar13 = *plVar9;
            uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar8 == 0) goto LAB_0515f3bc;
            piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            goto LAB_0515f3a4;
          }
          lVar14 = *plVar9;
          lVar13 = *(long *)puVar4;
          uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar8 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar13) {
                puVar11 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                goto LAB_0515f294;
              }
              uVar8 = uVar8 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar8 != 0);
          }
          puVar11 = (undefined8 *)FUN_02d9a5d4(plVar9,lVar13,1);
LAB_0515f294:
          plVar12 = (long *)(*(code *)*puVar11)(plVar9,puVar11[1]);
          if (plVar12 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
            if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60e88();
            }
          }
          lVar13 = *unaff_x19;
          uVar10 = FUN_0515f4e8();
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          lVar14 = *(long *)(lVar13 + 0x10);
          lVar15 = *(long *)puVar5;
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar2 = *(uint *)(lVar13 + 0x18);
          if (uVar2 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar13 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar14 + (long)(int)uVar2 * 8 + 0x20) = uVar10;
            thunk_FUN_02dd37b4();
          }
          else {
            FUN_03aac494(lVar13,uVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
        } while( true );
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar13 = *(long *)PTR_DAT_0677d900;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar13 = *(long *)puVar4;
  }
  *unaff_x19 = **(long **)(lVar13 + 0xb8);
  thunk_FUN_02dd37b4();
  goto LAB_0515f3e8;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar16 = piVar16 + 4;
    if (uVar8 == 0) break;
LAB_0515f3a4:
    if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
      puVar11 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_0515f3d8;
    }
  }
LAB_0515f3bc:
  puVar11 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)puVar3,0);
LAB_0515f3d8:
  (*(code *)*puVar11)(plVar9,puVar11[1]);
LAB_0515f3e8:
  return *unaff_x19;
}


