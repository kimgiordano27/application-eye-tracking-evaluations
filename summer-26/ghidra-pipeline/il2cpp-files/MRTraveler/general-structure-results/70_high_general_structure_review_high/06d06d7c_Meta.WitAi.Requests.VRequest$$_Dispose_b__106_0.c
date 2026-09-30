/*
FUNCTION_NAME: Meta.WitAi.Requests.VRequest$$<Dispose>b__106_0
ENTRY_POINT: 06d06d7c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_4
*/


void Meta_WitAi_Requests_VRequest__<Dispose>b__106_0(void)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x20;
  long *unaff_x21;
  undefined4 uStack000000000000000c;
  
  plVar2 = (long *)FUN_0469ce58();
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    plVar3 = (long *)FUN_0469cbf4(*(long *)(unaff_x20 + 0x20),*(undefined8 *)PTR_DAT_08e89028);
    lVar6 = *(long *)(unaff_x20 + 0x30);
    if (lVar6 != 0) {
      if ((*(char *)(lVar6 + 0x11) == '\0') || (*(char *)(lVar6 + 0x10) == '\0')) {
LAB_06d06e58:
        puVar1 = PTR_DAT_08e8c740;
        uStack000000000000000c = FUN_085e8280(0);
        uVar4 = FUN_070fde54(&stack0x0000000c,0);
        uVar4 = FUN_06f683f8(*(undefined8 *)puVar1,uVar4,0);
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_03cd7500(*unaff_x21);
        }
        FUN_085a3c50(uVar4,0);
        return;
      }
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
        if (plVar3 != (long *)0x0) {
          uVar4 = (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
          (**(code **)(*plVar2 + 0x188))(plVar2,uVar4,*(undefined8 *)(*plVar2 + 400));
          lVar6 = (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(*plVar3 + 0x1a0));
          if (lVar6 != 0) {
            uVar4 = FUN_05214770(lVar6,*(undefined8 *)PTR_DAT_08e6dd68);
            uVar5 = (**(code **)(*plVar2 + 0x218))
                              (plVar2,uVar4,0,1,*(undefined8 *)(*plVar2 + 0x220));
            if ((uVar5 & 1) != 0) {
              (**(code **)(*plVar2 + 0x238))(plVar2,0,*(undefined8 *)(*plVar2 + 0x240));
            }
            goto LAB_06d06e58;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


