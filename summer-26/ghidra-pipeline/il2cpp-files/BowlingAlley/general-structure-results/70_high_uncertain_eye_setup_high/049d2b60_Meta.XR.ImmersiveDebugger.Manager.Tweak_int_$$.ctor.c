/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Tweak<int>$$.ctor
ENTRY_POINT: 049d2b60
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Tweak<int>___ctor(undefined1 param_1 [16],float param_2)

{
  int iVar1;
  ushort uVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  thunk_FUN_032e1da0(PTR_DAT_072814d0);
  *(undefined1 *)(unaff_x21 + 0x360) = 1;
  lVar4 = *(long *)(unaff_x19 + 0x480);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x80) != 4) {
      return;
    }
    fVar10 = (float)FUN_04c091fc(lVar4,*(undefined8 *)
                                        (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x1c0));
    if (*(long *)(unaff_x19 + 0x440) != 0) {
      iVar1 = *(int *)(unaff_x19 + 0x498);
      plVar5 = (long *)FUN_06d9e768(*(long *)(unaff_x19 + 0x440),0);
      puVar3 = PTR_DAT_072814d0;
      if (plVar5 != (long *)0x0) {
        lVar7 = *plVar5;
        uVar2 = *(ushort *)(lVar7 + 0x12e);
        uVar8 = (ulong)uVar2;
        lVar4 = *(long *)PTR_DAT_072814d0;
        if (iVar1 == 0) {
          if (uVar2 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0x2d) * 0x10 + 0x138);
                goto LAB_049d2d14;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined8 *)FUN_032937ac(plVar5,lVar4,0x2d);
LAB_049d2d14:
          uVar11 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          if ((*(long *)(unaff_x19 + 0x448) == 0) ||
             (plVar5 = (long *)FUN_06d9e768(*(long *)(unaff_x19 + 0x448),0), plVar5 == (long *)0x0))
          goto LAB_049d2dcc;
          lVar7 = *plVar5;
          lVar4 = *(long *)puVar3;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0x2d) * 0x10 + 0x138);
                goto LAB_049d2d8c;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined8 *)FUN_032937ac(plVar5,lVar4,0x2d);
LAB_049d2d8c:
          uVar12 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          param_2 = fVar10 + *(float *)(unaff_x19 + 0x488);
        }
        else {
          if (uVar2 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0x14) * 0x10 + 0x138);
                goto LAB_049d2c60;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined8 *)FUN_032937ac(plVar5,lVar4,0x14);
LAB_049d2c60:
          uVar11 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          if ((*(long *)(unaff_x19 + 0x448) == 0) ||
             (plVar5 = (long *)FUN_06d9e768(*(long *)(unaff_x19 + 0x448),0), plVar5 == (long *)0x0))
          goto LAB_049d2dcc;
          lVar7 = *plVar5;
          lVar4 = *(long *)puVar3;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0x14) * 0x10 + 0x138);
                goto LAB_049d2cd8;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined8 *)FUN_032937ac(plVar5,lVar4,0x14);
LAB_049d2cd8:
          uVar12 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          param_2 = param_2 + *(float *)(unaff_x19 + 0x48c);
        }
        FUN_049d2dd0(uVar11,uVar12,param_2);
        return;
      }
    }
  }
LAB_049d2dcc:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


