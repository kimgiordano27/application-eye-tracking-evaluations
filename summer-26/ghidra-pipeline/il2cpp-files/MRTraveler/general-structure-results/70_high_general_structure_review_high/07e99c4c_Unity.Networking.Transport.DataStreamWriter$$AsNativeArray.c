/*
FUNCTION_NAME: Unity.Networking.Transport.DataStreamWriter$$AsNativeArray
ENTRY_POINT: 07e99c4c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


void Unity_Networking_Transport_DataStreamWriter__AsNativeArray(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  lVar2 = thunk_FUN_03cf5138();
  if (lVar2 != 0) {
    if (1 < *(uint *)(unaff_x19 + 3)) {
      unaff_x19[5] = unaff_x21;
      thunk_FUN_03d233cc();
      in_stack_00000030 = *(undefined8 *)(unaff_x20 + 0x30);
      lVar2 = thunk_FUN_03cf4e64(*unaff_x22,&stack0x00000030);
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_03cf5138(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
      goto LAB_07e99eb4;
      if (2 < *(uint *)(unaff_x19 + 3)) {
        unaff_x19[6] = lVar2;
        thunk_FUN_03d233cc(unaff_x19 + 6,lVar2);
        in_stack_00000028 = *(undefined8 *)(unaff_x20 + 8);
        lVar2 = thunk_FUN_03cf4e64(*unaff_x22,&stack0x00000028);
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_03cf5138(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
        goto LAB_07e99eb4;
        if (3 < *(uint *)(unaff_x19 + 3)) {
          unaff_x19[7] = lVar2;
          thunk_FUN_03d233cc(unaff_x19 + 7,lVar2);
          in_stack_00000020 = *(undefined8 *)(unaff_x20 + 0x20);
          lVar2 = thunk_FUN_03cf4e64(*unaff_x22,&stack0x00000020);
          if ((lVar2 != 0) &&
             (lVar3 = thunk_FUN_03cf5138(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
          goto LAB_07e99eb4;
          if (4 < *(uint *)(unaff_x19 + 3)) {
            unaff_x19[8] = lVar2;
            thunk_FUN_03d233cc(unaff_x19 + 8,lVar2);
            in_stack_00000018 = *(undefined8 *)(unaff_x20 + 0x38);
            lVar2 = thunk_FUN_03cf4e64(*unaff_x22,&stack0x00000018);
            if ((lVar2 != 0) &&
               (lVar3 = thunk_FUN_03cf5138(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
            goto LAB_07e99eb4;
            if (5 < *(uint *)(unaff_x19 + 3)) {
              unaff_x19[9] = lVar2;
              thunk_FUN_03d233cc(unaff_x19 + 9,lVar2);
              in_stack_00000010 = *(undefined8 *)(unaff_x20 + 0x10);
              lVar2 = thunk_FUN_03cf4e64(*unaff_x22,&stack0x00000010);
              if ((lVar2 != 0) &&
                 (lVar3 = thunk_FUN_03cf5138(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
              goto LAB_07e99eb4;
              if (6 < *(uint *)(unaff_x19 + 3)) {
                unaff_x19[10] = lVar2;
                thunk_FUN_03d233cc(unaff_x19 + 10,lVar2);
                in_stack_00000008 = *(undefined8 *)(unaff_x20 + 0x28);
                lVar2 = thunk_FUN_03cf4e64(*unaff_x22,&stack0x00000008);
                if ((lVar2 != 0) &&
                   (lVar3 = thunk_FUN_03cf5138(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0
                   )) goto LAB_07e99eb4;
                if (7 < *(uint *)(unaff_x19 + 3)) {
                  unaff_x19[0xb] = lVar2;
                  thunk_FUN_03d233cc(unaff_x19 + 0xb,lVar2);
                  lVar2 = thunk_FUN_03cf4e64(*unaff_x22);
                  if ((lVar2 != 0) &&
                     (lVar3 = thunk_FUN_03cf5138(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)),
                     lVar3 == 0)) goto LAB_07e99eb4;
                  puVar1 = PTR_DAT_08ef4930;
                  if (8 < *(uint *)(unaff_x19 + 3)) {
                    unaff_x19[0xc] = lVar2;
                    thunk_FUN_03d233cc(unaff_x19 + 0xc,lVar2);
                    FUN_06f752c8(*(undefined8 *)puVar1);
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
    FUN_03c8fb38();
  }
LAB_07e99eb4:
  uVar4 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
  FUN_03c8f9fc(uVar4,0);
}


