/*
FUNCTION_NAME: OVRPlugin$$SendEvent
ENTRY_POINT: 01d84d8c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 119
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01d8519c) */
/* WARNING: Removing unreachable block (ram,0x01d851a0) */

undefined8 OVRPlugin__SendEvent(long *param_1)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  long unaff_x19;
  long lVar11;
  long *unaff_x20;
  uint unaff_w21;
  undefined8 *unaff_x23;
  long unaff_x24;
  uint unaff_w25;
  int unaff_w26;
  long *unaff_x29;
  long *in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  long *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000058;
  
  while( true ) {
    lVar9 = *param_1;
    if (unaff_w26 == 0) {
                    /* try { // try from 01d84d94 to 01e84d9f has its CatchHandler @ 01d84f84 */
      pcVar10 = *(code **)(lVar9 + 0x278);
      uVar8 = *(undefined8 *)(lVar9 + 0x280);
    }
    else {
      pcVar10 = *(code **)(lVar9 + 0x298);
      uVar8 = *(undefined8 *)(lVar9 + 0x2a0);
    }
    plVar3 = (long *)(*pcVar10)(param_1,1,uVar8);
                    /* try { // try from 01d84db0 to 01e84db7 has its CatchHandler @ 01d84f80 */
    uVar4 = FUN_01cc86b0(plVar3,0,0);
    plVar6 = unaff_x20;
    if ((uVar4 & 1) == 0) {
                    /* try { // try from 01d84dc8 to 01e84dcf has its CatchHandler @ 01d84f7c */
      uVar8 = FUN_00fdc388(*unaff_x23,in_stack_00000048._4_4_);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                    /* try { // try from 01d84dec to 01e84e2f has its CatchHandler @ 01d843d0 */
        thunk_FUN_01022c14(*unaff_x29);
      }
      if (plVar3 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_02351e10 + 0x130);
        if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_02351e10
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc8d0(plVar3);
        }
      }
                    /* try { // try from 01d84e30 to 01e84e33 has its CatchHandler @ 01d84f70 */
      uVar4 = FUN_01d7f588(plVar3,unaff_w25,3,uVar8);
                    /* try { // try from 01d84e50 to 01e84e57 has its CatchHandler @ 01d84f74 */
      if (((uVar4 & 1) != 0) &&
         (uVar4 = FUN_01cc86b0(unaff_x20,0,0), plVar6 = plVar3, (uVar4 & 1) == 0)) {
        if (unaff_x19 == 0) {
          unaff_x19 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02352660);
          FUN_017d2874(unaff_x19,*(undefined4 *)(unaff_x24 + 0x18),*(undefined8 *)PTR_DAT_02359230);
          if (unaff_x19 == 0) goto LAB_01d85298;
          lVar9 = *(long *)(unaff_x19 + 0x10);
          lVar11 = *(long *)PTR_DAT_02352648;
          *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_01d85298;
          uVar2 = *(uint *)(unaff_x19 + 0x18);
          if (uVar2 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
            puVar5 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
            *puVar5 = unaff_x20;
            thunk_FUN_0106e12c(puVar5,unaff_x20);
          }
          else {
                    /* try { // try from 01d84ee8 to 01e84eeb has its CatchHandler @ 01d84f88 */
                    /* try { // try from 01d84eec to 01e84eff has its CatchHandler @ 01d843d0 */
            FUN_017d3030(unaff_x19,unaff_x20,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
        }
        lVar9 = *(long *)(unaff_x19 + 0x10);
                    /* try { // try from 01d84f00 to 01e84f03 has its CatchHandler @ 01d84f78 */
                    /* try { // try from 01d84f04 to 01e84fa3 has its CatchHandler @ 01d843d0 */
        lVar11 = *(long *)PTR_DAT_02352648;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        if (lVar9 == 0) goto LAB_01d85298;
        uVar2 = *(uint *)(unaff_x19 + 0x18);
        if (uVar2 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
          plVar6 = (long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
          *plVar6 = (long)plVar3;
          thunk_FUN_0106e12c(plVar6,plVar3);
          plVar6 = unaff_x20;
        }
        else {
          FUN_017d3030(unaff_x19,plVar3,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          plVar6 = unaff_x20;
        }
      }
    }
    unaff_w21 = unaff_w21 + 1;
    if ((int)*(uint *)(unaff_x24 + 0x18) <= (int)unaff_w21) break;
    if (*(uint *)(unaff_x24 + 0x18) <= unaff_w21) {
LAB_01d8529c:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    param_1 = *(long **)(unaff_x24 + (long)(int)unaff_w21 * 8 + 0x20);
    unaff_x20 = plVar6;
    if (param_1 == (long *)0x0) {
LAB_01d85298:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
  }
  if (unaff_x19 != 0) {
    in_stack_00000010 =
         (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_02353e90,*(undefined4 *)(unaff_x19 + 0x18));
    FUN_017d34e4(unaff_x19,in_stack_00000010,*(undefined8 *)PTR_DAT_02359228);
  }
  uVar4 = FUN_01cc8674(plVar6,0,0);
  if ((uVar4 & 1) != 0) {
    if ((in_stack_00000048._4_4_ == 0) && (in_stack_00000010 == (long *)0x0)) {
      if ((plVar6 == (long *)0x0) ||
         (lVar9 = (**(code **)(*plVar6 + 0x398))(plVar6,*(undefined8 *)(*plVar6 + 0x3a0)),
         lVar9 == 0)) goto LAB_01d85298;
      if (((unaff_w25 >> 0x12 & 1) == 0) && (*(long *)(lVar9 + 0x18) == 0)) {
        uVar8 = (**(code **)(*plVar6 + 0x328))
                          (plVar6,in_stack_00000040,unaff_w25,in_stack_00000018,in_stack_00000058);
        return uVar8;
      }
    }
    if (in_stack_00000010 == (long *)0x0) {
      in_stack_00000010 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_02353e90,1);
      if (in_stack_00000010 == (long *)0x0) goto LAB_01d85298;
      if ((plVar6 != (long *)0x0) &&
         (lVar9 = thunk_FUN_0103ffe0(plVar6,*(undefined8 *)(*in_stack_00000010 + 0x40)), lVar9 == 0)
         ) {
        uVar8 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
        FUN_00fdc400(uVar8,0);
      }
      if ((int)in_stack_00000010[3] == 0) goto LAB_01d8529c;
      in_stack_00000010[4] = (long)plVar6;
      thunk_FUN_0106e12c(in_stack_00000010 + 4,plVar6);
    }
    if (in_stack_00000058 == 0) {
      lVar11 = *(long *)PTR_DAT_023508c0;
      lVar9 = *(long *)(lVar11 + 0x38);
      if (lVar9 == 0) {
        FUN_0103c2a0(lVar11);
        lVar9 = *(long *)(lVar11 + 0x38);
      }
      lVar9 = *(long *)(lVar9 + 0x10);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0103c244();
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      lVar9 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0103c244();
      }
      in_stack_00000058 = **(long **)(lVar9 + 0xb8);
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    plVar6 = (long *)(**(code **)(*in_stack_00000018 + 0x188))
                               (in_stack_00000018,unaff_w25,in_stack_00000010,&stack0x00000058,
                                in_stack_00000020);
    uVar4 = FUN_01cc8210(plVar6,0,0);
    if ((uVar4 & 1) == 0) {
      if (plVar6 != (long *)0x0) {
        lVar9 = *plVar6;
        bVar1 = *(byte *)(*(long *)PTR_DAT_0234ebc0 + 0x130);
        if ((bVar1 <= *(byte *)(lVar9 + 0x130)) &&
           (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_0234ebc0))
        {
          uVar8 = (**(code **)(lVar9 + 0x328))
                            (plVar6,in_stack_00000040,unaff_w25,in_stack_00000018,in_stack_00000058)
          ;
          return uVar8;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00fdc8d0(plVar6);
      }
      goto LAB_01d85298;
    }
  }
  uVar8 = (**(code **)(*in_stack_00000028 + 0x2c8))
                    (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 0x2d0));
  thunk_FUN_010303a8(PTR_DAT_0234bcf0);
  uVar7 = thunk_FUN_010400dc();
  FUN_01d4c060(uVar7,uVar8,in_stack_00000030,0);
  uVar8 = thunk_FUN_010303a8(PTR_DAT_02359298);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar7,uVar8);
}


