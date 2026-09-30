/*
FUNCTION_NAME: Unity.Properties.TypeConverter<uint,-SerializedValueView>$$Invoke
ENTRY_POINT: 04b9c130
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void Unity_Properties_TypeConverter<uint,_SerializedValueView>__Invoke(void)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w22;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  iVar1 = FUN_05b07bb4();
  if ((int)(iVar1 - unaff_w22) < *(int *)(unaff_x20 + 0x20)) {
    thunk_FUN_03037804(PTR_DAT_06f6d8e8);
    uVar5 = thunk_FUN_0301080c();
    uVar4 = thunk_FUN_03037804(PTR_DAT_06f9a0c0);
    FUN_05a64d00(uVar5,uVar4,0);
LAB_04b9c548:
                    /* WARNING: Subroutine does not return */
    FUN_02fe93c0(uVar5);
  }
  lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x170);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    FUN_02feb2c4(lVar7);
  }
  lVar7 = thunk_FUN_03010710();
  if (lVar7 == 0) {
    plVar2 = (long *)thunk_FUN_03010710();
    if (plVar2 == (long *)0x0) {
      thunk_FUN_03037804(PTR_DAT_06f6d8e8);
      uVar5 = thunk_FUN_0301080c();
      uVar4 = thunk_FUN_03037804(PTR_DAT_06f9a0c8);
      uVar6 = thunk_FUN_03037804(PTR_DAT_06f98f28);
      FUN_05a5ea40(uVar5,uVar4,uVar6,0);
      goto LAB_04b9c548;
    }
    if (0 < *(int *)(unaff_x20 + 0x20)) {
      lVar7 = 0;
      uVar11 = 0;
      lVar10 = (ulong)unaff_w22 << 0x20;
      do {
        lVar12 = *(long *)(unaff_x20 + 0x10);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        if (*(uint *)(lVar12 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        lVar8 = *(long *)(unaff_x20 + 0x18);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        in_stack_00000038 = 0;
        in_stack_00000040 = 0;
        in_stack_00000048 = 0;
        FUN_04239e94(&stack0x00000038,*(undefined4 *)(lVar12 + uVar11 * 4 + 0x20),
                     *(undefined8 *)(lVar8 + lVar7 + 0x20),*(undefined8 *)(lVar8 + lVar7 + 0x28),
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x180));
        lVar12 = thunk_FUN_0301043c(*(undefined8 *)
                                     (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78));
        if ((lVar12 != 0) &&
           (lVar8 = thunk_FUN_03010710(lVar12,*(undefined8 *)(*plVar2 + 0x40)), lVar8 == 0)) {
          uVar4 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                            ();
                    /* WARNING: Subroutine does not return */
          FUN_02fe93c0(uVar4,0);
        }
        if ((ulong)*(uint *)(plVar2 + 3) <= unaff_w22 + uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        plVar3 = (long *)((long)plVar2 + (lVar10 >> 0x1d) + 0x20);
        *plVar3 = lVar12;
        thunk_FUN_03048534(plVar3,lVar12);
        uVar11 = uVar11 + 1;
        lVar7 = lVar7 + 0x10;
        lVar10 = lVar10 + 0x100000000;
      } while ((long)uVar11 < (long)*(int *)(unaff_x20 + 0x20));
    }
  }
  else if (0 < *(int *)(unaff_x20 + 0x20)) {
    lVar10 = 0;
    uVar11 = 0;
    lVar12 = (ulong)unaff_w22 << 0x20;
    do {
      lVar8 = *(long *)(unaff_x20 + 0x10);
      if (lVar8 == 0) {
Unity_Properties_TypeConverter<uint,_ulong>__Invoke:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_04b9c378;
      lVar9 = *(long *)(unaff_x20 + 0x18);
      if (lVar9 == 0) goto Unity_Properties_TypeConverter<uint,_ulong>__Invoke;
      if (*(uint *)(lVar9 + 0x18) <= uVar11) {
LAB_04b9c378:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      in_stack_00000038 = 0;
      in_stack_00000040 = 0;
      in_stack_00000048 = 0;
      FUN_04239e94(&stack0x00000038,*(undefined4 *)(lVar8 + uVar11 * 4 + 0x20),
                   *(undefined8 *)(lVar9 + lVar10 + 0x20),*(undefined8 *)(lVar9 + lVar10 + 0x28),
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x180));
      if ((ulong)*(uint *)(lVar7 + 0x18) <= unaff_w22 + uVar11) goto LAB_04b9c378;
      lVar8 = lVar7 + (lVar12 >> 0x20) * 0x18;
      *(undefined8 *)(lVar8 + 0x30) = in_stack_00000048;
      *(undefined8 *)(lVar8 + 0x28) = in_stack_00000040;
      *(undefined8 *)(lVar8 + 0x20) = in_stack_00000038;
      thunk_FUN_03048534(lVar8 + 0x28,0);
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 0x10;
      lVar12 = lVar12 + 0x100000000;
    } while ((long)uVar11 < (long)*(int *)(unaff_x20 + 0x20));
  }
  return;
}


