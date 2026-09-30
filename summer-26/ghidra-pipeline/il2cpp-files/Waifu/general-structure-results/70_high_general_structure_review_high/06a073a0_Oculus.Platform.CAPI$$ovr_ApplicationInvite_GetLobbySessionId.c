/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_ApplicationInvite_GetLobbySessionId
ENTRY_POINT: 06a073a0
PROGRAM: Waifu-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_12;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void Oculus_Platform_CAPI__ovr_ApplicationInvite_GetLobbySessionId(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  int unaff_w19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 unaff_x23;
  ulong unaff_x24;
  long unaff_x28;
  long unaff_x29;
  float fVar10;
  undefined4 uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  ulong unaff_d8;
  ulong uVar15;
  float unaff_s9;
  float fVar16;
  ulong uVar17;
  float unaff_s10;
  ulong uVar18;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  ulong in_stack_00000008;
  undefined8 in_stack_00000010;
  float fStack00000000000000c0;
  float fStack00000000000000c4;
  float in_stack_000000c8;
  
  pcVar4 = (code *)FUN_033d1b68(
                               "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                               );
  *(code **)(unaff_x29 + 0x840) = pcVar4;
  (*pcVar4)();
  lVar5 = FUN_03fa1ab4();
  if (lVar5 == 0) goto LAB_06a0779c;
  if (DAT_086f1fe8 == (code *)0x0) {
    DAT_086f1fe8 = (code *)FUN_033d1b68("UnityEngine.Collider::set_isTrigger(System.Boolean)");
  }
  (*DAT_086f1fe8)(lVar5,1);
  FUN_03fa1ab4();
  lVar5 = FUN_03fa1ab4();
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)&stack0x00000010 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)&stack0x00000010 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  in_stack_00000010 = unaff_x23;
  if (lVar5 == 0) goto LAB_06a0779c;
  FUN_079ba8a4(lVar5);
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)&stack0x00000010 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)&stack0x00000010 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  in_stack_00000010 = unaff_x20;
  FUN_079ba8a4(lVar5);
  if (DAT_086eccf0 == (code *)0x0) {
    DAT_086eccf0 = (code *)FUN_033d1b68(
                                       "UnityEngine.Animations.PositionConstraint::set_constraintActive(System.Boolean)"
                                       );
  }
  (*DAT_086eccf0)(lVar5,1);
  pcVar4 = *(code **)(unaff_x28 + 0x250);
  if (pcVar4 == (code *)0x0) {
    pcVar4 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
    *(code **)(unaff_x28 + 0x250) = pcVar4;
  }
  lVar5 = (*pcVar4)();
  if (lVar5 == 0) goto LAB_06a0779c;
  fVar16 = unaff_s9 * 0.5;
  fVar14 = unaff_s11 + unaff_s15 * fVar16;
  fVar13 = unaff_s13 + unaff_s12 * fVar16;
  FUN_07a18224(unaff_s14 + unaff_s10 * fVar16,fVar13,fVar14,lVar5,0);
  if ((unaff_w19 != 0) && (unaff_d8 = in_stack_00000008 & 0xffffffff, unaff_w19 != 1)) {
    FUN_033d1ba8(&DAT_083cd790);
    uVar6 = thunk_FUN_03398a84();
    uVar7 = FUN_033d1ba8(&DAT_0843dd30);
    FUN_0682a030(uVar6,uVar7,0);
    puVar8 = &DAT_0841a3c0;
    goto LAB_06a077d8;
  }
  if ((unaff_x24 & 1) == 0) {
    fVar13 = 0.5;
    unaff_d8 = (ulong)(uint)(ABS((float)unaff_d8 - *(float *)(unaff_x21 + 0x20)) * 0.5);
  }
  pcVar4 = *(code **)(unaff_x28 + 0x250);
  if (pcVar4 == (code *)0x0) {
    pcVar4 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
    *(code **)(unaff_x28 + 0x250) = pcVar4;
  }
  lVar5 = (*pcVar4)();
  if (lVar5 == 0) goto LAB_06a0779c;
  fVar10 = (float)FUN_07a181c8(lVar5,0);
  fVar16 = fVar16 + (float)unaff_d8 * 0.5;
  FUN_07a18224(fStack00000000000000c0 * fVar16 + fVar10,fStack00000000000000c4 * fVar16 + fVar13,
               in_stack_000000c8 * fVar16 + fVar14,lVar5,0);
  if (unaff_w19 == 0) {
    uVar15 = 0;
LAB_06a07624:
    uVar12 = (ulong)*(uint *)(unaff_x21 + 0x20);
    uVar17 = (ulong)*(uint *)(unaff_x21 + 0x24);
    uVar18 = uVar12;
    if (((in_stack_00000008._4_4_ == 0) ||
        (uVar17 = uVar12, uVar18 = unaff_d8, in_stack_00000008._4_4_ == 2)) ||
       (uVar15 = uVar12, uVar17 = (ulong)*(uint *)(unaff_x21 + 0x24), in_stack_00000008._4_4_ == 1))
    {
      lVar5 = FUN_03fa1ab4();
      if (lVar5 != 0) {
        puVar9 = (undefined8 *)(lVar5 + 0x30);
        *puVar9 = unaff_x23;
        if (DAT_08908cd0 == 0) {
          *(undefined8 *)(lVar5 + 0x38) = unaff_x20;
        }
        else {
          puVar1 = &DAT_0873ccb0 + ((ulong)puVar9 >> 0x12 & 0x7fff);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          puVar9 = (undefined8 *)(lVar5 + 0x38);
          *puVar9 = unaff_x20;
          puVar1 = &DAT_0873ccb0 + ((ulong)puVar9 >> 0x12 & 0x7fff);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        *(int *)(lVar5 + 0x20) = (int)uVar18;
        *(int *)(lVar5 + 0x24) = (int)uVar15;
        *(int *)(lVar5 + 0x28) = (int)uVar17;
        uVar11 = *(undefined4 *)(unaff_x21 + 0x20);
        *(int *)(lVar5 + 0x2c) = unaff_w19;
        *(undefined4 *)(lVar5 + 0x40) = uVar11;
        pcVar4 = *(code **)(unaff_x28 + 0x250);
        if (pcVar4 == (code *)0x0) {
          pcVar4 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
          *(code **)(unaff_x28 + 0x250) = pcVar4;
        }
        lVar5 = (*pcVar4)();
        if (lVar5 != 0) {
          FUN_07a19820(uVar18,uVar15,uVar17,lVar5,0);
          return;
        }
      }
LAB_06a0779c:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
  }
  else if (unaff_w19 == 1) {
    uVar15 = unaff_d8;
    unaff_d8 = 0;
    goto LAB_06a07624;
  }
  FUN_033d1ba8(&DAT_083cd790);
  uVar6 = thunk_FUN_03398a84();
  uVar7 = FUN_033d1ba8(&DAT_0843dd38);
  FUN_0682a030(uVar6,uVar7,0);
  puVar8 = &DAT_0841a3d8;
LAB_06a077d8:
  uVar7 = FUN_033d1ba8(puVar8);
                    /* WARNING: Subroutine does not return */
  FUN_033d1c20(uVar6,uVar7);
}


