/*
FUNCTION_NAME: System.ArraySegment<OVRPlugin.Vector3f>$$get_Array
ENTRY_POINT: 040f2ab8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ArraySegment<OVRPlugin_Vector3f>__get_Array
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long in_x9;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  long *unaff_x25;
  float unaff_s8;
  undefined1 auVar12 [16];
  
  piVar11 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar11 + -2) == param_3) {
      puVar4 = (undefined8 *)(param_1 + (long)(*piVar11 + 0x61) * 0x10 + 0x138);
      goto LAB_040f2af8;
    }
    in_x9 = in_x9 + -1;
    piVar11 = piVar11 + 4;
  } while (in_x9 != 0);
  puVar4 = (undefined8 *)FUN_0367cd30();
LAB_040f2af8:
  (*(code *)*puVar4)();
  plVar5 = (long *)unaff_x20[2];
  if ((plVar5 != (long *)0x0) &&
     (lVar6 = (**(code **)(*plVar5 + 0x9a8))(plVar5,*(undefined8 *)(*plVar5 + 0x9b0)), lVar6 != 0))
  {
    plVar5 = (long *)FUN_07320328(lVar6,0);
    iVar2 = FUN_052a07e8();
    auVar12 = FUN_073408a4(unaff_s8 * (float)iVar2,0);
    if (plVar5 != (long *)0x0) {
      lVar6 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x25) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0x3f) * 0x10 + 0x138);
            goto LAB_040f2bb4;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_0367cd30(plVar5,*unaff_x25,0x3f);
LAB_040f2bb4:
      (*(code *)*puVar4)(plVar5,auVar12._0_8_,auVar12._8_8_ & 0xffffffff,puVar4[1]);
      iVar2 = (**(code **)(*unaff_x20 + 0x178))();
      if (unaff_w21 == iVar2) {
LAB_040f2fec:
        *(undefined1 *)(unaff_x20 + 0x12) = 0;
        return;
      }
      (**(code **)(*unaff_x20 + 0x188))();
      if (unaff_x20[5] == 0) goto LAB_040f2fe8;
      if (*(int *)(unaff_x20[5] + 0x18) < 1) goto LAB_040f2fec;
      iVar2 = (**(code **)(*unaff_x20 + 0x178))();
      if ((unaff_x20[5] == 0) ||
         (lVar6 = FUN_0459ed6c(unaff_x20[5],0,
                               *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90)
                              ), lVar6 == 0)) goto LAB_040f2fe8;
      if (iVar2 < *(int *)(lVar6 + 0x20)) {
        if ((unaff_x20[5] == 0) ||
           (lVar6 = FUN_0459ed6c(unaff_x20[5],0,
                                 *(undefined8 *)
                                  (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90)),
           lVar6 == 0)) goto LAB_040f2fe8;
        iVar2 = *(int *)(lVar6 + 0x20);
        iVar3 = (**(code **)(*unaff_x20 + 0x178))();
        lVar6 = unaff_x20[0xf];
        iVar2 = iVar2 - iVar3;
        if (0 < iVar2) {
          do {
            lVar7 = unaff_x20[5];
            if (lVar7 == 0) goto LAB_040f2fe8;
            if (*(int *)(lVar7 + 0x18) < 1) break;
            plVar5 = (long *)FUN_0459ed6c(lVar7,*(int *)(lVar7 + 0x18) + -1,
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90));
            if (lVar6 == 0) goto LAB_040f2fe8;
            lVar7 = *(long *)(lVar6 + 0x10);
            lVar10 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar7 == 0) goto LAB_040f2fe8;
            uVar1 = *(uint *)(lVar6 + 0x18);
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
              plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
              *plVar8 = (long)plVar5;
              thunk_FUN_036b7ad0(plVar8,plVar5);
            }
            else {
              FUN_0459f03c(lVar6,plVar5,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
            lVar7 = unaff_x20[5];
            if (((lVar7 == 0) ||
                (FUN_045a0804(lVar7,*(int *)(lVar7 + 0x18) + -1,
                              *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa0))
                , plVar5 == (long *)0x0)) ||
               (lVar7 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180)),
               lVar7 == 0)) goto LAB_040f2fe8;
            FUN_0732b868(lVar7,0);
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        if (unaff_x20[5] == 0) goto LAB_040f2fe8;
        FUN_045a0040(unaff_x20[5],0,lVar6,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8));
        lVar6 = unaff_x20[0xf];
        if (lVar6 == 0) goto LAB_040f2fe8;
        iVar2 = *(int *)(lVar6 + 0x18);
        *(undefined4 *)(lVar6 + 0x18) = 0;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (0 < iVar2) {
LAB_040f2f64:
          FUN_05e3b0f4(*(undefined8 *)(lVar6 + 0x10),0,iVar2,0);
        }
      }
      else {
        iVar2 = (**(code **)(*unaff_x20 + 0x178))();
        lVar6 = unaff_x20[5];
        if ((lVar6 == 0) ||
           (lVar6 = FUN_0459ed6c(lVar6,*(int *)(lVar6 + 0x18) + -1,
                                 *(undefined8 *)
                                  (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90)),
           lVar6 == 0)) goto LAB_040f2fe8;
        if (iVar2 < *(int *)(lVar6 + 0x20)) {
          lVar6 = unaff_x20[0xf];
          iVar2 = (**(code **)(*unaff_x20 + 0x178))();
          lVar7 = unaff_x20[5];
          if (lVar7 != 0) {
            iVar3 = 0;
            while (lVar7 = FUN_0459ed6c(lVar7,iVar3,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90)),
                  lVar7 != 0) {
              lVar10 = unaff_x20[5];
              if (iVar2 <= *(int *)(lVar7 + 0x20)) {
                if (lVar10 != 0) {
                  FUN_045a089c(lVar10,0,iVar3,
                               *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0)
                              );
                  if ((unaff_x20[5] != 0) &&
                     (FUN_0459f24c(unaff_x20[5],lVar6,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 200)),
                     lVar6 != 0)) {
                    iVar2 = *(int *)(lVar6 + 0x18);
                    *(undefined4 *)(lVar6 + 0x18) = 0;
                    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                    if (iVar2 < 1) goto LAB_040f2f74;
                    goto LAB_040f2f64;
                  }
                }
                break;
              }
              if ((lVar10 == 0) ||
                 (plVar5 = (long *)FUN_0459ed6c(lVar10,iVar3,
                                                *(undefined8 *)
                                                 (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) +
                                                 0x90)), lVar6 == 0)) break;
              lVar7 = *(long *)(lVar6 + 0x10);
              lVar10 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              if (lVar7 == 0) break;
              uVar1 = *(uint *)(lVar6 + 0x18);
              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                *plVar8 = (long)plVar5;
                thunk_FUN_036b7ad0(plVar8,plVar5);
              }
              else {
                FUN_0459f03c(lVar6,plVar5,
                             *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
              if ((plVar5 == (long *)0x0) ||
                 (lVar7 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180)),
                 lVar7 == 0)) break;
              FUN_0732b804(lVar7,0);
              iVar2 = (**(code **)(*unaff_x20 + 0x178))();
              lVar7 = unaff_x20[5];
              iVar3 = iVar3 + 1;
              if (lVar7 == 0) break;
            }
          }
          goto LAB_040f2fe8;
        }
      }
LAB_040f2f74:
      lVar6 = unaff_x20[5];
      if (lVar6 != 0) {
        iVar2 = 0;
        do {
          if (*(int *)(lVar6 + 0x18) <= iVar2) goto LAB_040f2fec;
          (**(code **)(*unaff_x20 + 0x178))();
          if (unaff_x20[5] == 0) break;
          FUN_0459ed6c(unaff_x20[5],iVar2,
                       *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90));
          FUN_052a1908();
          lVar6 = unaff_x20[5];
          iVar2 = iVar2 + 1;
        } while (lVar6 != 0);
      }
    }
  }
LAB_040f2fe8:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


