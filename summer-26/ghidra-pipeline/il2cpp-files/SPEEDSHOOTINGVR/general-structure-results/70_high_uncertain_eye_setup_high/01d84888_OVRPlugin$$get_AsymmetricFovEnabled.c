/*
FUNCTION_NAME: OVRPlugin$$get_AsymmetricFovEnabled
ENTRY_POINT: 01d84888
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__get_AsymmetricFovEnabled(long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  ulong uVar13;
  int *piVar14;
  long *unaff_x19;
  undefined8 uVar15;
  int unaff_w26;
  long lVar16;
  long unaff_x28;
  undefined8 in_stack_00000048;
  long in_stack_00000058;
  
  lVar4 = (**(code **)(param_1 + 0x238))();
  uVar15 = *(undefined8 *)PTR_DAT_0234bd80;
  if (*(int *)(*(long *)PTR_DAT_0234bc58 + 0xe0) == 0) {
    thunk_FUN_01022c14(*(long *)PTR_DAT_0234bc58);
  }
  lVar5 = FUN_01d5e86c(uVar15,0);
  if ((lVar4 == lVar5) && (uVar2 = in_stack_00000048._4_4_ - (uint)(unaff_w26 == 0), 0 < (int)uVar2)
     ) {
    lVar4 = FUN_00fdc388(*(undefined8 *)PTR_DAT_0234cba8,uVar2);
    puVar9 = PTR_DAT_023517e0;
    if (unaff_x28 != 0) {
      uVar12 = 0;
      do {
        if (*(uint *)(unaff_x28 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        lVar16 = (long)(int)uVar12;
        lVar5 = *(long *)(unaff_x28 + lVar16 * 8 + 0x20);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        uVar15 = *(undefined8 *)puVar9;
        lVar6 = thunk_FUN_0103ffe0(lVar5,uVar15);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc8d0(lVar5,uVar15);
        }
        lVar6 = *(long *)puVar9;
        plVar7 = (long *)thunk_FUN_0103ffe0(lVar5,lVar6);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc8d0(lVar5,lVar6);
        }
        lVar5 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar6) {
              puVar8 = (undefined8 *)(lVar5 + (long)(*piVar14 + 7) * 0x10 + 0x138);
              goto LAB_01d849b0;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_0103c348(plVar7,lVar6,7);
LAB_01d849b0:
        uVar3 = (*(code *)*puVar8)(plVar7,0,puVar8[1]);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        if (*(uint *)(lVar4 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        uVar12 = uVar12 + 1;
        *(undefined4 *)(lVar4 + lVar16 * 4 + 0x20) = uVar3;
        if (uVar12 == uVar2) {
          plVar7 = (long *)(**(code **)(*unaff_x19 + 0x2c8))();
          if (plVar7 == (long *)0x0) {
            if (unaff_w26 != 0) goto LAB_01d85298;
          }
          else {
            bVar1 = *(byte *)(*(long *)PTR_DAT_0234bdf8 + 0x130);
            if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_0234bdf8)) {
                    /* WARNING: Subroutine does not return */
              FUN_00fdc8d0();
            }
            if (unaff_w26 != 0) {
              uVar15 = thunk_FUN_0105ce10(plVar7,lVar4,0);
              return uVar15;
            }
          }
          if (in_stack_00000058 == 0) goto LAB_01d85298;
          if (*(uint *)(in_stack_00000058 + 0x18) <= uVar2) goto LAB_01d8529c;
          if (plVar7 == (long *)0x0) goto LAB_01d85298;
          thunk_FUN_0105cfb0(plVar7,*(undefined8 *)(in_stack_00000058 + (long)(int)uVar2 * 8 + 0x20)
                             ,lVar4,0);
          goto LAB_01d85270;
        }
        unaff_x28 = in_stack_00000058;
      } while (in_stack_00000058 != 0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  if (unaff_w26 == 0) {
    puVar9 = PTR_DAT_023592c0;
    if (in_stack_00000048._4_4_ != 1) {
LAB_01d85494:
      uVar15 = thunk_FUN_010303a8(puVar9);
      thunk_FUN_010303a8(PTR_DAT_0234bcd0);
      uVar10 = thunk_FUN_010400dc();
      uVar11 = thunk_FUN_010303a8(PTR_DAT_023592d0);
      FUN_01c5e198(uVar10,uVar15,uVar11,0);
      uVar15 = thunk_FUN_010303a8(PTR_DAT_02359298);
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar10,uVar15);
    }
    if (unaff_x28 == 0) {
LAB_01d85298:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    if (*(int *)(unaff_x28 + 0x18) == 0) {
LAB_01d8529c:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    (**(code **)(*unaff_x19 + 0x2e8))();
LAB_01d85270:
    uVar15 = 0;
  }
  else {
    puVar9 = PTR_DAT_023592c8;
    if (in_stack_00000048._4_4_ != 0) goto LAB_01d85494;
    uVar15 = (**(code **)(*unaff_x19 + 0x2c8))();
  }
  return uVar15;
}


