/*
FUNCTION_NAME: OVRManager.Observable<__Il2CppFullySharedGenericType>$$get_Value
ENTRY_POINT: 01865fcc
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_Observable<__Il2CppFullySharedGenericType>__get_Value(undefined8 param_1)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  long unaff_x25;
  long *plVar11;
  int unaff_w27;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iStack000000000000000c;
  long lStack0000000000000010;
  int iStack000000000000001c;
  uint uStack0000000000000020;
  long *in_stack_00000030;
  undefined8 in_stack_00000038;
  ulong uStack0000000000000040;
  undefined8 in_stack_00000048;
  
  *(undefined4 *)(unaff_x20 + 0x45c) = 0;
  lStack0000000000000010 = unaff_x25 + 0x20;
  uStack0000000000000020 = (uint)(2 < in_stack_00000038._4_4_ || 3 - in_stack_00000038._4_4_ < 1);
  iVar9 = 0;
  iStack000000000000000c = in_stack_00000038._4_4_ + -3;
  uStack0000000000000040 = 0;
  iStack000000000000001c = unaff_w21;
  do {
    if (unaff_w27 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0234bed8);
      FUN_021acc50(lVar3,0);
      lVar4 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 8);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0103c244();
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      lVar4 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 8);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0103c244();
      }
      if (lVar3 == 0) goto LAB_01866560;
      param_1 = FUN_021af390(lVar3,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x28),0);
    }
    if (iVar9 * in_stack_00000038._4_4_ < iVar9 * in_stack_00000038._4_4_ + in_stack_00000038._4_4_)
    {
      iVar10 = 0;
      bVar2 = true;
      puVar8 = (undefined8 *)(lStack0000000000000010 + (long)(int)uStack0000000000000040 * 0x20);
      do {
        if ((*(byte *)(*(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x50) + 0x135) & 1) == 0) {
          FUN_0103c244();
        }
        lVar4 = thunk_FUN_010400dc();
        FUN_01303218(lVar4,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x58));
        if (lVar4 == 0) goto LAB_01866560;
        *(long *)(lVar4 + 0x38) = unaff_x20;
        thunk_FUN_0106e12c((long *)(lVar4 + 0x38),unaff_x20);
        if (unaff_x25 == 0) goto LAB_01866560;
        if (*(uint *)(unaff_x25 + 0x18) <= (uint)((int)uStack0000000000000040 + iVar10)) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        uVar14 = *puVar8;
        uVar13 = puVar8[3];
        uVar6 = puVar8[2];
        *(undefined8 *)(lVar4 + 0x18) = puVar8[1];
        *(undefined8 *)(lVar4 + 0x10) = uVar14;
        *(undefined8 *)(lVar4 + 0x28) = uVar13;
        *(undefined8 *)(lVar4 + 0x20) = uVar6;
        thunk_FUN_0106e12c((undefined8 *)(lVar4 + 0x10),0);
        lVar5 = FUN_010f8634(*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x68));
        if (lVar5 == 0) goto LAB_01866560;
        FUN_021ac820(lVar5,*(undefined8 *)(lVar4 + 0x18),0);
        plVar11 = (long *)(lVar4 + 0x30);
        *plVar11 = lVar5;
        thunk_FUN_0106e12c(plVar11,lVar5);
        if (*plVar11 == 0) goto LAB_01866560;
        FUN_0216b764(*plVar11,1,0);
        lVar12 = *plVar11;
        lVar5 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 8);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0103c244();
        }
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        lVar5 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 8);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0103c244();
        }
        if (lVar12 == 0) goto LAB_01866560;
        FUN_021af390(lVar12,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x30),0);
        if (bVar2) {
          lVar12 = *plVar11;
          lVar5 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 8);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0103c244();
          }
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          lVar5 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 8);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0103c244();
          }
          if (lVar12 == 0) goto LAB_01866560;
          FUN_021af390(lVar12,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x38),0);
        }
        if (*plVar11 == 0) goto LAB_01866560;
        FUN_0198efa4(*plVar11,*(undefined8 *)(lVar4 + 0x10),
                     *(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x80));
        lVar5 = *plVar11;
        if ((*(byte *)(*(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x90) + 0x135) & 1) == 0) {
          FUN_0103c244();
        }
        uVar6 = thunk_FUN_010400dc();
        UnityEngine_UIElements_KeyboardEventBase<object>__get_altKey
                  (uVar6,lVar4,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x88),
                   *(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x98));
        if (lVar5 == 0) goto LAB_01866560;
        FUN_0198ebc8(lVar5,uVar6,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xa0));
        lVar5 = *plVar11;
        if ((*(byte *)(*(long *)(*(long *)(*unaff_x19 + 0xc0) + 0xb0) + 0x135) & 1) == 0) {
          FUN_0103c244();
        }
        uVar6 = thunk_FUN_010400dc();
        FUN_016065a0(uVar6,lVar4,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xa8),
                     *(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xb8));
        FUN_011ac314(lVar5,uVar6,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xc0));
        lVar5 = *in_stack_00000030;
        if (lVar5 == 0) goto LAB_01866560;
        uVar6 = *(undefined8 *)(lVar4 + 0x30);
        lVar4 = *(long *)(lVar5 + 0x10);
        lVar12 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0xd0);
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar4 == 0) goto LAB_01866560;
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          puVar7 = (undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
          *puVar7 = uVar6;
          thunk_FUN_0106e12c(puVar7);
        }
        else {
          FUN_017d3030(lVar5,uVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
        if (unaff_w27 == 0) {
          lVar4 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x10);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0103c244();
          }
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          lVar4 = FUN_01ac1638(unaff_x20,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x20));
          if (lVar4 == 0) goto LAB_01866560;
          in_stack_00000048 = *(undefined8 *)(lVar4 + 0x378);
          param_1 = FUN_021b39ec(&stack0x00000048,*plVar11,0);
        }
        else {
          if (lVar3 == 0) goto LAB_01866560;
          param_1 = FUN_021b3938(lVar3,*plVar11,0);
        }
        iVar10 = iVar10 + 1;
        bVar2 = false;
        puVar8 = puVar8 + 4;
      } while (in_stack_00000038._4_4_ != iVar10);
    }
    iVar10 = iStack000000000000000c;
    if ((uStack0000000000000020 & 1) == 0) {
      do {
        if (unaff_w27 == 0) {
          lVar4 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x10);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0103c244();
          }
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          lVar4 = FUN_01ac1638(unaff_x20,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x20));
          if (lVar4 == 0) goto LAB_01866560;
          in_stack_00000048 = *(undefined8 *)(lVar4 + 0x378);
          uVar6 = FUN_01865c8c(lVar4,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xd8));
          param_1 = FUN_021b39ec(&stack0x00000048,uVar6,0);
        }
        else {
          uVar6 = FUN_01865c8c(param_1,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xd8));
          if (lVar3 == 0) goto LAB_01866560;
          param_1 = FUN_021b3938(lVar3,uVar6,0);
        }
        bVar2 = iVar10 != -1;
        iVar10 = iVar10 + 1;
      } while (bVar2);
    }
    iVar10 = iStack000000000000001c;
    if (unaff_w27 != 0) {
      lVar4 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x10);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0103c244();
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      lVar4 = FUN_01ac1638(unaff_x20,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x20));
      if (lVar4 == 0) {
LAB_01866560:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      in_stack_00000048 = *(undefined8 *)(lVar4 + 0x378);
      param_1 = FUN_021b39ec(&stack0x00000048,lVar3,0);
    }
    iVar9 = iVar9 + 1;
    uStack0000000000000040 = (ulong)(uint)((int)uStack0000000000000040 + in_stack_00000038._4_4_);
    if (iVar9 == iVar10) {
      FUN_01866568(unaff_x20,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xe0));
      return;
    }
  } while( true );
}


