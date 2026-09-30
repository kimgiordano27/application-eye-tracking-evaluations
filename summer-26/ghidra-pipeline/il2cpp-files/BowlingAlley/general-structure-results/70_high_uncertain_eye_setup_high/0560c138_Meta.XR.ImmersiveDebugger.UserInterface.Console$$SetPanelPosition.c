/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Console$$SetPanelPosition
ENTRY_POINT: 0560c138
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Console__SetPanelPosition(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar9;
  long *unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  long unaff_x24;
  undefined4 unaff_w25;
  int iVar10;
  long unaff_x27;
  long *unaff_x28;
  long *plVar11;
  
  thunk_FUN_032cd7c0(param_1);
  uVar3 = FUN_06b268c8(unaff_w25,0);
  if ((uVar3 & 1) == 0) {
    memcpy(&stack0x00000308,&stack0x00000230,0x68);
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    memcpy(&stack0x00000158,&stack0x00000308,0x68);
    uVar3 = FUN_06b29388(&stack0x00000158,0);
    if ((uVar3 & 1) == 0) {
      iVar10 = 0;
      plVar11 = (long *)PTR_DAT_07286320;
      do {
        lVar6 = *unaff_x22;
        uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar3 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *plVar11) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_0560c20c;
            }
            uVar3 = uVar3 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_032937ac();
LAB_0560c20c:
        iVar1 = (*(code *)*puVar4)();
        if (iVar1 <= iVar10) {
          return;
        }
        if (iVar10 != unaff_w23) {
          lVar6 = *unaff_x22;
          uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar3 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *unaff_x28) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_0560c274;
              }
              uVar3 = uVar3 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)FUN_032937ac();
LAB_0560c274:
          (*(code *)*puVar4)(&stack0x00000308);
          memcpy(&stack0x000001c0,&stack0x00000308,0x68);
          if ((unaff_w23 <= iVar10) ||
             (uVar3 = UnityEngine_GUISkin__get_verticalScrollbarThumb(&stack0x000001c0,0),
             (uVar3 & 1) == 0)) {
            uVar2 = FUN_06b26358(&stack0x000001c0,0);
            if (*(int *)(*unaff_x21 + 0xe0) == 0) {
              thunk_FUN_032cd7c0(*unaff_x21);
            }
            uVar3 = FUN_06b268c8(uVar2,0);
            if ((uVar3 & 1) == 0) {
              memcpy(&stack0x00000308,&stack0x000001c0,0x68);
              if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
              }
              memcpy(&stack0x000000f0,&stack0x00000308,0x68);
              uVar3 = FUN_06b29388(&stack0x000000f0,0);
              if ((uVar3 & 1) == 0) {
                lVar6 = *(long *)(unaff_x27 + 0x38);
                if (lVar6 == 0) goto LAB_0560c480;
                if (*(int *)(lVar6 + 0x18) < 1) {
                  memcpy(&stack0x00000088,&stack0x00000230,0x68);
                  memcpy(&stack0x00000020,&stack0x000001c0,0x68);
                  if (unaff_x24 == 0) goto LAB_0560c480;
                  pcVar7 = *(code **)(unaff_x24 + 0x18);
                  uVar5 = *(undefined8 *)(unaff_x24 + 0x40);
                  memcpy(&stack0x00000308,&stack0x00000088,0x68);
                  memcpy(&stack0x000002a0,&stack0x00000020,0x68);
                  uVar5 = (*pcVar7)(uVar5,&stack0x00000308,&stack0x000002a0,
                                    *(undefined8 *)(unaff_x24 + 0x28));
                }
                else {
                  uVar5 = FUN_041e29a8(lVar6,*(int *)(lVar6 + 0x18) + -1,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x130));
                  lVar6 = *(long *)(unaff_x27 + 0x38);
                  if (lVar6 == 0) {
LAB_0560c480:
                    /* WARNING: Subroutine does not return */
                    FUN_032d5ee8();
                  }
                  FUN_041e4460(lVar6,*(int *)(lVar6 + 0x18) + -1,
                               *(undefined8 *)
                                (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x138));
                  memcpy(&stack0x00000088,&stack0x00000230,0x68);
                  memcpy(&stack0x00000020,&stack0x000001c0,0x68);
                  if (unaff_x19 == 0) goto LAB_0560c480;
                  pcVar7 = *(code **)(unaff_x19 + 0x18);
                  uVar9 = *(undefined8 *)(unaff_x19 + 0x40);
                  memcpy(&stack0x00000308,&stack0x00000088,0x68);
                  memcpy(&stack0x000002a0,&stack0x00000020,0x68);
                  (*pcVar7)(uVar9,uVar5,&stack0x00000308,&stack0x000002a0,
                            *(undefined8 *)(unaff_x19 + 0x28));
                  plVar11 = (long *)PTR_DAT_07286320;
                }
                FUN_0560b598(unaff_x27,uVar5,
                             *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x150))
                ;
              }
            }
          }
        }
        iVar10 = iVar10 + 1;
      } while( true );
    }
  }
  return;
}


