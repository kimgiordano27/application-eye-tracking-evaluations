/*
FUNCTION_NAME: Firebase.FutureString.Action$$Invoke
ENTRY_POINT: 0342273c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_13;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03422a40) */
/* WARNING: Removing unreachable block (ram,0x03422b30) */

void Firebase_FutureString_Action__Invoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *plVar10;
  uint uVar11;
  long lVar12;
  
  thunk_FUN_032e1da0(PTR_DAT_0727a9d0);
  thunk_FUN_032e1da0(PTR_DAT_0727aa28);
  *(undefined1 *)(unaff_x21 + 0xee7) = 1;
  if (unaff_x20 != (long *)0x0) {
    uVar3 = OVRPlugin_OVRP_1_58_0___cctor();
    if ((uVar3 & 1) == 0) {
      if (unaff_x20[5] != 0) {
        plVar6 = (long *)FUN_04efafb4(unaff_x20[5],*(undefined8 *)PTR_DAT_0727aa10);
        puVar2 = PTR_DAT_0727aa18;
        puVar1 = PTR_DAT_0727a180;
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        uVar11 = 0;
        do {
          lVar4 = *plVar6;
          uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar3 != 0) {
            piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
                puVar7 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_03422860;
              }
              uVar3 = uVar3 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar3 != 0);
          }
          puVar7 = (undefined8 *)FUN_032937ac(plVar6,*(long *)puVar1,0);
LAB_03422860:
          uVar3 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          if ((uVar3 & 1) == 0) {
LAB_034229c8:
            if (plVar6 == (long *)0x0) goto LAB_03422a34;
            lVar4 = *plVar6;
            uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar3 == 0) goto LAB_03422a0c;
            piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            goto LAB_034229f4;
          }
          lVar4 = *plVar6;
          uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar3 != 0) {
            piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                puVar7 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_034228bc;
              }
              uVar3 = uVar3 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar3 != 0);
          }
          puVar7 = (undefined8 *)FUN_032937ac(plVar6,*(long *)puVar2,0);
LAB_034228bc:
          lVar4 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          lVar8 = *(long *)(unaff_x19 + 0x70);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          if ((int)*(uint *)(lVar8 + 0x18) <= (int)uVar11) goto LAB_034229c8;
          if (*(uint *)(lVar8 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
            Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
          }
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          lVar12 = (long)(int)uVar11;
          plVar10 = *(long **)(lVar8 + lVar12 * 8 + 0x20);
          uVar5 = FUN_05920f80(lVar4 + 0x28,0);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8(uVar5,uVar5);
          }
          (**(code **)(*plVar10 + 0x558))(plVar10,uVar5,*(undefined8 *)(*plVar10 + 0x560));
          lVar8 = *(long *)(unaff_x19 + 0x78);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          if (*(uint *)(lVar8 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
            Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
          }
          if (*(long *)(lVar4 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          plVar10 = *(long **)(lVar8 + lVar12 * 8 + 0x20);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          (**(code **)(*plVar10 + 0x558))
                    (plVar10,*(undefined8 *)(*(long *)(lVar4 + 0x50) + 0x38),
                     *(undefined8 *)(*plVar10 + 0x560));
          lVar8 = *(long *)(unaff_x19 + 0x80);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          if (*(uint *)(lVar8 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
            Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
          }
          plVar10 = *(long **)(lVar8 + lVar12 * 8 + 0x20);
          uVar5 = FUN_05922088(lVar4 + 0x30,0);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8(uVar5,uVar5);
          }
          (**(code **)(*plVar10 + 0x558))(plVar10,uVar5,*(undefined8 *)(*plVar10 + 0x560));
          if (*(long *)(lVar4 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          uVar3 = thunk_FUN_057aa644(*(undefined8 *)(*(long *)(lVar4 + 0x50) + 0x38),
                                     *(undefined8 *)(unaff_x19 + 0x90),0);
          if ((uVar3 & 1) != 0) {
            *(undefined1 *)(unaff_x19 + 0x88) = 1;
          }
          uVar11 = uVar11 + 1;
        } while( true );
      }
    }
    else {
      lVar4 = (**(code **)(*unaff_x20 + 0x178))();
      if (lVar4 != 0) {
        uVar5 = FUN_057a19ac(*(undefined8 *)PTR_DAT_0727aa28,*(undefined8 *)(lVar4 + 0x18),0);
        if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(*(long *)PTR_DAT_072798f8);
        }
        FUN_06bb2a00(uVar5,0);
        return;
      }
    }
  }
  goto LAB_03422b28;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar9 = piVar9 + 4;
    if (uVar3 == 0) break;
LAB_034229f4:
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07279f60) {
      puVar7 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_03422a28;
    }
  }
LAB_03422a0c:
  puVar7 = (undefined8 *)FUN_032937ac(plVar6,*(long *)PTR_DAT_07279f60,0);
LAB_03422a28:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_03422a34:
  if ((*(char *)(unaff_x19 + 0x88) != '\0') ||
     (uVar3 = FUN_057ab1f0(*(undefined8 *)(unaff_x19 + 0x90),0), (uVar3 & 1) != 0)) {
    return;
  }
  lVar4 = FUN_05dbaedc(*(undefined8 *)PTR_DAT_0727a9d0,1,0,1,0);
  uVar5 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727a9d8);
  FUN_04bf4290();
  if (lVar4 != 0) {
    FUN_0498244c(lVar4,uVar5,*(undefined8 *)PTR_DAT_0727a9e8);
    return;
  }
LAB_03422b28:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


