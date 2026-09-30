/*
FUNCTION_NAME: Unity.Netcode.Components.HalfVector4$$SerializeRead
ENTRY_POINT: 0720c2fc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2
*/


void Unity_Netcode_Components_HalfVector4__SerializeRead(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x22;
  long lVar5;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 uStack0000000000000068;
  
  lVar5 = *(long *)(unaff_x22 + 0x760);
  uStack0000000000000068 = *unaff_x20;
  lVar2 = thunk_FUN_03ac70f4(*(undefined8 *)(lVar5 + 0x80),&stack0x00000068);
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_03ac73c0(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0)) {
LAB_0720c6c0:
    uVar4 = thunk_FUN_03ad4f64();
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar4,0);
  }
  if ((int)unaff_x19[3] != 0) {
    unaff_x19[4] = lVar2;
    thunk_FUN_03afed3c(unaff_x19 + 4,lVar2);
    in_stack_00000058 = unaff_x20[4];
    lVar2 = thunk_FUN_03ac70f4(*(undefined8 *)(lVar5 + 0x80),&stack0x00000058);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_03ac73c0(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
    goto LAB_0720c6c0;
    if ((*(uint *)(unaff_x19 + 3) & 0xfffffffe) != 0) {
      unaff_x19[5] = lVar2;
      thunk_FUN_03afed3c(unaff_x19 + 5,lVar2);
      in_stack_00000050 = unaff_x20[8];
      lVar2 = thunk_FUN_03ac70f4(*(undefined8 *)(lVar5 + 0x80),&stack0x00000050);
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_03ac73c0(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
      goto LAB_0720c6c0;
      if (2 < *(uint *)(unaff_x19 + 3)) {
        unaff_x19[6] = lVar2;
        thunk_FUN_03afed3c(unaff_x19 + 6,lVar2);
        in_stack_00000048 = unaff_x20[1];
        lVar2 = thunk_FUN_03ac70f4(*(undefined8 *)(lVar5 + 0x80),&stack0x00000048);
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_03ac73c0(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
        goto LAB_0720c6c0;
        if ((*(uint *)(unaff_x19 + 3) & 0xfffffffc) != 0) {
          unaff_x19[7] = lVar2;
          thunk_FUN_03afed3c(unaff_x19 + 7,lVar2);
          in_stack_00000040 = unaff_x20[5];
          lVar2 = thunk_FUN_03ac70f4(*(undefined8 *)(lVar5 + 0x80),&stack0x00000040);
          if ((lVar2 != 0) &&
             (lVar3 = thunk_FUN_03ac73c0(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
          goto LAB_0720c6c0;
          if (4 < *(uint *)(unaff_x19 + 3)) {
            unaff_x19[8] = lVar2;
            thunk_FUN_03afed3c(unaff_x19 + 8,lVar2);
            in_stack_00000038 = unaff_x20[9];
            lVar2 = thunk_FUN_03ac70f4(*(undefined8 *)(lVar5 + 0x80),&stack0x00000038);
            if ((lVar2 != 0) &&
               (lVar3 = thunk_FUN_03ac73c0(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
            goto LAB_0720c6c0;
            if (5 < *(uint *)(unaff_x19 + 3)) {
              unaff_x19[9] = lVar2;
              thunk_FUN_03afed3c(unaff_x19 + 9,lVar2);
              in_stack_00000030 = unaff_x20[2];
              lVar2 = thunk_FUN_03ac70f4(*(undefined8 *)(lVar5 + 0x80),&stack0x00000030);
              if ((lVar2 != 0) &&
                 (lVar3 = thunk_FUN_03ac73c0(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
              goto LAB_0720c6c0;
              if (6 < *(uint *)(unaff_x19 + 3)) {
                unaff_x19[10] = lVar2;
                thunk_FUN_03afed3c(unaff_x19 + 10,lVar2);
                in_stack_00000028 = unaff_x20[6];
                lVar2 = thunk_FUN_03ac70f4(*(undefined8 *)(lVar5 + 0x80),&stack0x00000028);
                if ((lVar2 != 0) &&
                   (lVar3 = thunk_FUN_03ac73c0(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0
                   )) goto LAB_0720c6c0;
                if ((*(uint *)(unaff_x19 + 3) & 0xfffffff8) != 0) {
                  unaff_x19[0xb] = lVar2;
                  thunk_FUN_03afed3c(unaff_x19 + 0xb,lVar2);
                  in_stack_00000020 = unaff_x20[10];
                  lVar2 = thunk_FUN_03ac70f4(*(undefined8 *)(lVar5 + 0x80),&stack0x00000020);
                  if ((lVar2 != 0) &&
                     (lVar3 = thunk_FUN_03ac73c0(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)),
                     lVar3 == 0)) goto LAB_0720c6c0;
                  if (8 < *(uint *)(unaff_x19 + 3)) {
                    unaff_x19[0xc] = lVar2;
                    thunk_FUN_03afed3c(unaff_x19 + 0xc,lVar2);
                    in_stack_00000018 = unaff_x20[3];
                    lVar2 = thunk_FUN_03ac70f4(*(undefined8 *)(lVar5 + 0x80),&stack0x00000018);
                    if ((lVar2 != 0) &&
                       (lVar3 = thunk_FUN_03ac73c0(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)),
                       lVar3 == 0)) goto LAB_0720c6c0;
                    if (9 < *(uint *)(unaff_x19 + 3)) {
                      unaff_x19[0xd] = lVar2;
                      thunk_FUN_03afed3c(unaff_x19 + 0xd,lVar2);
                      in_stack_00000010 = unaff_x20[7];
                      lVar2 = thunk_FUN_03ac70f4(*(undefined8 *)(lVar5 + 0x80),&stack0x00000010);
                      if ((lVar2 != 0) &&
                         (lVar3 = thunk_FUN_03ac73c0(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)),
                         lVar3 == 0)) goto LAB_0720c6c0;
                      if (10 < *(uint *)(unaff_x19 + 3)) {
                        unaff_x19[0xe] = lVar2;
                        thunk_FUN_03afed3c(unaff_x19 + 0xe,lVar2);
                        in_stack_00000008 = unaff_x20[0xb];
                        lVar2 = thunk_FUN_03ac70f4(*(undefined8 *)(lVar5 + 0x80),&stack0x00000008);
                        if ((lVar2 != 0) &&
                           (lVar5 = thunk_FUN_03ac73c0(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)),
                           lVar5 == 0)) goto LAB_0720c6c0;
                        puVar1 = PTR_DAT_084e65b0;
                        if (0xb < *(uint *)(unaff_x19 + 3)) {
                          unaff_x19[0xf] = lVar2;
                          thunk_FUN_03afed3c(unaff_x19 + 0xf,lVar2);
                          FUN_065ce7dc(*(undefined8 *)puVar1);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


