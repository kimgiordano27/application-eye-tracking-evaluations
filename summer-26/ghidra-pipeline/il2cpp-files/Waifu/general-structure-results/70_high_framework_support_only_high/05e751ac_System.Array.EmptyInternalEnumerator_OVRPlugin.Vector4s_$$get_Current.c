/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4s>$$get_Current
ENTRY_POINT: 05e751ac
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4s>__get_Current(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long unaff_x19;
  long unaff_x20;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x25;
  long *plVar13;
  long in_stack_00000008;
  
  FUN_05b73418();
  if (in_stack_00000008 == 0) {
    return;
  }
  uVar4 = FUN_0670e5a4(in_stack_00000008,DAT_0844c180,0);
  if (in_stack_00000008 == 0) goto LAB_05e7549c;
  iVar5 = FUN_0670e5a4(in_stack_00000008,DAT_0843c590,0);
  uVar11 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x168);
  if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
    FUN_033b9870(DAT_083d23b8);
  }
  uVar11 = FUN_0683eca4(uVar11,0);
  if (in_stack_00000008 == 0) goto LAB_05e7549c;
  lVar6 = FUN_0670bb64(in_stack_00000008,DAT_08437510,uVar11,0);
  lVar12 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_0338f618(lVar12);
  }
  if (lVar6 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = FUN_0339898c(lVar6,lVar12);
    if (lVar7 == 0) goto LAB_05e754a0;
  }
  plVar13 = (long *)(unaff_x19 + 0x30);
  *plVar13 = lVar7;
  lVar12 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_0338f618(lVar12);
  }
  if ((lVar6 != 0) && (lVar7 = FUN_0339898c(lVar6,lVar12), lVar7 == 0)) {
LAB_05e754a0:
                    /* WARNING: Subroutine does not return */
    FUN_033d1fec(lVar6,lVar12);
  }
  if (DAT_08908cd0 == 0) {
    if (iVar5 != 0) goto LAB_05e7534c;
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  else {
    puVar1 = &DAT_0873ccb0 + ((ulong)plVar13 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar13 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      puVar9 = (undefined8 *)(unaff_x19 + 0x10);
      *puVar9 = 0;
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
    else {
LAB_05e7534c:
      FUN_05e74a50();
      uVar11 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x180);
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar11 = FUN_0683eca4(uVar11,0);
      if (in_stack_00000008 == 0) goto LAB_05e7549c;
      lVar6 = FUN_0670bb64(in_stack_00000008,DAT_0843ef40,uVar11,0);
      lVar12 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_0338f618(lVar12);
      }
      if (lVar6 == 0) {
        FUN_06851730(0x10,0);
LAB_05e754b8:
                    /* WARNING: Subroutine does not return */
        FUN_033d1fec(lVar6,lVar12);
      }
      lVar7 = FUN_0339898c(lVar6,lVar12);
      if (lVar7 == 0) goto LAB_05e754b8;
      if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
        uVar10 = 0;
        uVar8 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
        do {
          if (uVar8 <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1d44();
          }
          FUN_05e74ba0();
          uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
          uVar10 = uVar10 + 1;
        } while ((long)uVar10 < (long)(int)*(uint *)(lVar7 + 0x18));
      }
    }
  }
  *(undefined4 *)(unaff_x19 + 0x2c) = uVar4;
  if (*(int *)(*(long *)(unaff_x25 + 0x88) + 0xe0) == 0) {
    FUN_033b9870();
  }
  lVar6 = FUN_067f6a20(0);
  if (lVar6 != 0) {
    FUN_05b73180();
    return;
  }
LAB_05e7549c:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


