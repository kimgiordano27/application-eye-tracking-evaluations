/*
FUNCTION_NAME: FUN_0654ef6c
ENTRY_POINT: 0654ef6c
PROGRAM: Untangled-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_0654ef6c(undefined8 param_1,long *param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  
  if ((DAT_071ce63e & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d57530);
    FUN_02f07e70(PTR_DAT_06d03db0);
                    /* try { // try from 0654efb0 to 0664efb7 has its CatchHandler @ 0654f38c */
    FUN_02f07e70(PTR_DAT_06d02bd0);
    FUN_02f07e70(PTR_DAT_06d01eb0);
    FUN_02f07e70(PTR_DAT_06d03f98);
    FUN_02f07e70(OVRPlugin_BodyJointLocation___TypeInfo);
    FUN_02f07e70(PTR_DAT_06d38e50);
                    /* try { // try from 0654efec to 0664eff7 has its CatchHandler @ 0654f324 */
    FUN_02f07e70(PTR_DAT_06d38e18);
                    /* try { // try from 0654eff8 to 0664f287 has its CatchHandler @ 0654ebb8 */
    DAT_071ce63e = 1;
  }
  if (param_2 != (long *)0x0) {
    if ((param_3 != 0) && (param_4 != 0)) {
      lVar8 = *param_2;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06d03db0) {
            puVar2 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_0654f27c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar2 = (undefined8 *)FUN_02eea86c(param_2,*(long *)PTR_DAT_06d03db0,1);
LAB_0654f27c:
                    /* try { // try from 0654f288 to 0664f28f has its CatchHandler @ 0654f328 */
      (*(code *)*puVar2)(param_2,param_3,param_4,puVar2[1]);
LAB_0654f290:
      puVar1 = PTR_DAT_06d38e18;
      lVar8 = *(long *)PTR_DAT_06d38e18;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar8 = *(long *)puVar1;
      }
                    /* try { // try from 0654f2c4 to 0664f2cf has its CatchHandler @ 0654f320 */
      return *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8);
    }
    uVar3 = thunk_FUN_02ebbee0(param_2,0);
    uVar11 = *(undefined8 *)PTR_DAT_06d57530;
    if (*(int *)(*(long *)PTR_DAT_06d01eb0 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*(long *)PTR_DAT_06d01eb0);
    }
    uVar11 = FUN_056109c0(uVar11,0);
    plVar4 = (long *)FUN_0656a9d8(uVar3,uVar11,0);
    uVar9 = FUN_05619d34(plVar4,0,0);
    if ((uVar9 & 1) != 0) {
      plVar4 = (long *)thunk_FUN_02ebbee0(param_2,0);
      uVar3 = 0;
      if (plVar4 != (long *)0x0) {
        uVar3 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      }
      uVar3 = FUN_05458458(uVar3,*(undefined8 *)OVRPlugin_BodyJointLocation___TypeInfo,0);
      if (*(int *)(*(long *)PTR_DAT_06d38e18 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*(long *)PTR_DAT_06d38e18);
      }
      uVar3 = FUN_06550144(uVar3);
      return uVar3;
    }
    if ((plVar4 != (long *)0x0) &&
       (lVar8 = (**(code **)(*plVar4 + 0x468))(plVar4,*(undefined8 *)(*plVar4 + 0x470)),
       puVar1 = PTR_DAT_06d02bd0, lVar8 != 0)) {
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_0654f2cc;
      uVar3 = *(undefined8 *)(lVar8 + 0x20);
      plVar5 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,2);
      if (plVar5 != (long *)0x0) {
        if ((param_3 != 0) &&
           (lVar8 = thunk_FUN_02ef170c(param_3,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0)) {
LAB_0654f2d0:
                    /* try { // try from 0654f2d0 to 0664f33f has its CatchHandler @ 0654ebb8 */
          uVar3 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
          FUN_02f07f94(uVar3,0);
        }
        if ((int)plVar5[3] != 0) {
          plVar5[4] = param_3;
          thunk_FUN_02f411dc(plVar5 + 4,param_3);
          if ((param_4 != 0) &&
             (lVar8 = thunk_FUN_02ef170c(param_4,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0))
          goto LAB_0654f2d0;
          if (1 < *(uint *)(plVar5 + 3)) {
            plVar5[5] = param_4;
            thunk_FUN_02f411dc(plVar5 + 5,param_4);
            lVar8 = FUN_0562cc08(uVar3,plVar5,0);
            if (*(int *)(*(long *)PTR_DAT_06d38e50 + 0xe0) == 0) {
              thunk_FUN_02f12b58(*(long *)PTR_DAT_06d38e50);
            }
            lVar6 = FUN_0656b55c(plVar4,*(undefined8 *)PTR_DAT_06d03f98,0);
            plVar4 = (long *)FUN_02f07f14(*(undefined8 *)puVar1,1);
            if (plVar4 != (long *)0x0) {
              if ((lVar8 != 0) &&
                 (lVar7 = thunk_FUN_02ef170c(lVar8,*(undefined8 *)(*plVar4 + 0x40)), lVar7 == 0))
              goto LAB_0654f2d0;
              if ((int)plVar4[3] == 0) goto LAB_0654f2cc;
              plVar4[4] = lVar8;
              thunk_FUN_02f411dc(plVar4 + 4,lVar8);
              if (lVar6 != 0) {
                FUN_0552fdd0(lVar6,param_2,plVar4,0);
                goto LAB_0654f290;
              }
            }
            goto LAB_0654f2c8;
          }
        }
LAB_0654f2cc:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
    }
  }
LAB_0654f2c8:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


