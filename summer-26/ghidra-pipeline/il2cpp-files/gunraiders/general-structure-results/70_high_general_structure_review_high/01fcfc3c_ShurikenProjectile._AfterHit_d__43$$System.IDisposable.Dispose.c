/*
FUNCTION_NAME: ShurikenProjectile.<AfterHit>d__43$$System.IDisposable.Dispose
ENTRY_POINT: 01fcfc3c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void ShurikenProjectile_<AfterHit>d__43__System_IDisposable_Dispose
               (undefined1 param_1 [16],undefined8 param_2,undefined1 param_3 [16],
               undefined8 param_4,long param_5)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  int in_w8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  long *unaff_x21;
  long lVar7;
  
  if (in_w8 == 0) {
    thunk_FUN_01c1d1e8();
    param_5 = *unaff_x21;
  }
  if (**(long **)(param_5 + 0xb8) != 0) {
    *(undefined8 *)(**(long **)(param_5 + 0xb8) + 0x1e0) = 0;
    *(undefined8 *)(unaff_x20 + 0x80) = 0;
    *(undefined2 *)(unaff_x19 + 0x4d1) = 0;
    lVar2 = FUN_03d468ac();
    if (lVar2 != 0) {
      FUN_03d53b84(lVar2,0);
      lVar2 = FUN_03d468ac();
      if (lVar2 != 0) {
        FUN_03d558f8(0,param_2,0,param_4,lVar2,0);
        if (**(long **)(*unaff_x21 + 0xb8) != 0) {
          if (*(char *)(**(long **)(*unaff_x21 + 0xb8) + 0x3be) == '\0') {
            FUN_01fd072c();
            FUN_03d4b1bc();
          }
          *(undefined4 *)(unaff_x19 + 0x4d4) = 0;
          *(undefined1 *)(unaff_x19 + 0x4d3) = 0;
          lVar7 = *(long *)(unaff_x19 + 0x488);
          plVar3 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,1);
          lVar2 = FUN_03d468ac();
          if (lVar2 != 0) {
            FUN_03d554d8(lVar2,0);
            lVar2 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042301b0);
            if (plVar3 != (long *)0x0) {
              if ((lVar2 != 0) &&
                 (lVar4 = thunk_FUN_01c495e4(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
                uVar5 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
                FUN_01c5d37c(uVar5,0);
              }
              if ((int)plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4ac();
              }
              plVar3[4] = lVar2;
              if (lVar7 != 0) {
                FUN_0357c4c8(lVar7,*(undefined8 *)
                                    System_Runtime_CompilerServices_ConditionalWeakTable<HttpWebRequest,_NtlmSession>_TypeInfo
                             ,1,plVar3,0);
                lVar2 = *(long *)(unaff_x20 + 0x48);
                if (lVar2 != 0) {
                  iVar1 = *(int *)(lVar2 + 0x18);
                  *(undefined4 *)(lVar2 + 0x18) = 0;
                  *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
                  if (0 < iVar1) {
                    FUN_032f3ffc(*(undefined8 *)(lVar2 + 0x10),0,iVar1,0);
                  }
                  uVar6 = *(undefined8 *)(unaff_x19 + 0x508);
                  uVar5 = FUN_03d468ac();
                  if (*(int *)(*(long *)PTR_DAT_04231ee0 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8(*(long *)PTR_DAT_04231ee0);
                  }
                  FUN_01ddc680(0x3f800000,0,uVar6,uVar5,0,0,0,0,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


