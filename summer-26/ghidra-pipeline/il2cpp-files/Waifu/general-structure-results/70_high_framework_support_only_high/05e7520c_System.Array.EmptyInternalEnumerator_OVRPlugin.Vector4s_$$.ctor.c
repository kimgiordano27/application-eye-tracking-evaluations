/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4s>$$.ctor
ENTRY_POINT: 05e7520c
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4s>___ctor(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long in_x9;
  undefined8 *puVar7;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  int unaff_w22;
  long unaff_x23;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x25;
  long unaff_x26;
  long *plVar11;
  long in_stack_00000008;
  
  uVar9 = *(undefined8 *)(in_x9 + 0x168);
  if (*(int *)(param_1 + 0xe0) == 0) {
    FUN_033b9870(param_1);
  }
  FUN_0683eca4(uVar9,0);
  if (unaff_x23 == 0) goto LAB_05e7549c;
  lVar4 = FUN_0670bb64();
  lVar10 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0338f618(lVar10);
  }
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_0339898c(lVar4,lVar10);
    if (lVar5 == 0) goto LAB_05e754a0;
  }
  plVar11 = (long *)(unaff_x19 + 0x30);
  *plVar11 = lVar5;
  lVar10 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0338f618(lVar10);
  }
  if ((lVar4 != 0) && (lVar5 = FUN_0339898c(lVar4,lVar10), lVar5 == 0)) {
LAB_05e754a0:
                    /* WARNING: Subroutine does not return */
    FUN_033d1fec(lVar4,lVar10);
  }
  if (DAT_08908cd0 == 0) {
    if (unaff_w22 != 0) goto LAB_05e7534c;
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  else {
    puVar1 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (unaff_w22 == 0) {
      puVar7 = (undefined8 *)(unaff_x19 + 0x10);
      *puVar7 = 0;
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar7 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else {
LAB_05e7534c:
      FUN_05e74a50();
      uVar9 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x180);
      if (*(int *)(*(long *)(unaff_x26 + 0x3b8) + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar9 = FUN_0683eca4(uVar9,0);
      if (in_stack_00000008 == 0) goto LAB_05e7549c;
      lVar4 = FUN_0670bb64(in_stack_00000008,DAT_0843ef40,uVar9,0);
      lVar10 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0338f618(lVar10);
      }
      if (lVar4 == 0) {
        FUN_06851730(0x10,0);
LAB_05e754b8:
                    /* WARNING: Subroutine does not return */
        FUN_033d1fec(lVar4,lVar10);
      }
      lVar5 = FUN_0339898c(lVar4,lVar10);
      if (lVar5 == 0) goto LAB_05e754b8;
      if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
        uVar8 = 0;
        uVar6 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
        do {
          if (uVar6 <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1d44();
          }
          FUN_05e74ba0();
          uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
          uVar8 = uVar8 + 1;
        } while ((long)uVar8 < (long)(int)*(uint *)(lVar5 + 0x18));
      }
    }
  }
  *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
  if (*(int *)(*(long *)(unaff_x25 + 0x88) + 0xe0) == 0) {
    FUN_033b9870();
  }
  lVar4 = FUN_067f6a20(0);
  if (lVar4 != 0) {
    FUN_05b73180();
    return;
  }
LAB_05e7549c:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


