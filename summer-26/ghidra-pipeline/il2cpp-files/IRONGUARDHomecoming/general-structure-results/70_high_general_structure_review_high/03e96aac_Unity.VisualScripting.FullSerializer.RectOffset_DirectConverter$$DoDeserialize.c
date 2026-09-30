/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.RectOffset_DirectConverter$$DoDeserialize
ENTRY_POINT: 03e96aac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_10;telemetry_or_network_hits_4
*/


long Unity_VisualScripting_FullSerializer_RectOffset_DirectConverter__DoDeserialize
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  
  uVar3 = FUN_0340ebc0(param_1,param_2,param_4,0);
  plVar4 = (long *)FUN_01f08890(*unaff_x23,1);
  uVar10 = *unaff_x24;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*unaff_x25);
  }
  lVar5 = FUN_03579868(uVar10,0);
  if (plVar4 != (long *)0x0) {
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_01f116d0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
      uVar3 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar3,0);
    }
    puVar1 = Method_UnityEngine_UIElements_MouseCaptureEventBase<MouseCaptureOutEvent>__ctor__;
    if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    plVar4[4] = lVar5;
    thunk_FUN_01f51358(plVar4 + 4,lVar5);
    lVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
    FUN_040735fc(lVar5,uVar3,plVar4,0);
    puVar1 = PTR_DAT_0457b3e0;
    if (lVar5 != 0) {
      FUN_04077338(lVar5,0x34,0);
      lVar6 = FUN_023361c8(lVar5,*(undefined8 *)puVar1);
      lVar7 = FUN_04073258(lVar5,0);
      if ((unaff_x19 != 0) && (uVar3 = FUN_03e46eb0(), lVar7 != 0)) {
        FUN_0407dcf4(lVar7,uVar3,0,0);
        lVar7 = FUN_04073258(lVar5,0);
        if (DAT_0482ee12 == '\0') {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
          DAT_0482ee12 = '\x01';
        }
        puVar1 = Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__;
        if (lVar7 != 0) {
          puVar8 = *(undefined4 **)
                    (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8
                    );
          FUN_0407c958(*puVar8,puVar8[1],puVar8[2],lVar7,0);
          lVar7 = FUN_04073258(lVar5,0);
          if (DAT_0482ee0f == '\0') {
            thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchReportFlowResult>__ctor__);
            DAT_0482ee0f = '\x01';
          }
          if (lVar7 != 0) {
            puVar8 = *(undefined4 **)
                      (*(long *)Method_Oculus_Platform_Message<LaunchReportFlowResult>__ctor__ +
                      0xb8);
            FUN_0407d6f4(*puVar8,puVar8[1],puVar8[2],puVar8[3],lVar7,0);
            lVar7 = FUN_04073258(lVar5,0);
            if (DAT_0482ee10 == '\0') {
              thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
              DAT_0482ee10 = '\x01';
            }
            if (lVar7 != 0) {
              lVar9 = *(long *)(*(long *)puVar1 + 0xb8);
              FUN_0407da88(*(undefined4 *)(lVar9 + 0xc),*(undefined4 *)(lVar9 + 0x10),
                           *(undefined4 *)(lVar9 + 0x14),lVar7,0);
              lVar7 = FUN_040703d4();
              if (lVar7 != 0) {
                uVar2 = FUN_04073294(lVar7,0);
                FUN_040732d0(lVar5,uVar2,0);
                if (lVar6 != 0) {
                  *(long *)(lVar6 + 0x70) = unaff_x19;
                  thunk_FUN_01f51358();
                  *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(unaff_x20 + 8);
                  thunk_FUN_01f51358();
                    /* try { // try from 03e96d04 to 03f96e07 has its CatchHandler @ 03e96d04
                       catch() { ... } // from try @ 03e96d04 with catch @ 03e96d04
                       catch() { ... } // from try @ 03e96fdc with catch @ 03e96d04
                       catch() { ... } // from try @ 03e97024 with catch @ 03e96d04
                       catch() { ... } // from try @ 03e97080 with catch @ 03e96d04
                       catch() { ... } // from try @ 03e970b0 with catch @ 03e96d04 */
                  *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(unaff_x20 + 0x10);
                  thunk_FUN_01f51358();
                  *(byte *)(lVar6 + 0x50) = *(byte *)(unaff_x20 + 0x20) & 1;
                  FUN_03e96508(lVar6,*(undefined8 *)(unaff_x20 + 0x18));
                  lVar5 = FUN_03e966b4(lVar6);
                  lVar7 = FUN_03e4694c();
                  if ((lVar7 != 0) && (uVar2 = FUN_0404cad8(lVar7,0), lVar5 != 0)) {
                    FUN_0404cb14(lVar5,uVar2,0);
                    lVar5 = FUN_03e966b4(lVar6);
                    lVar7 = FUN_03e4694c();
                    if ((lVar7 != 0) && (uVar2 = FUN_0404cb58(lVar7,0), lVar5 != 0)) {
                      FUN_0404cb94(lVar5,uVar2,0);
                      return lVar6;
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
  FUN_01f08a3c();
}


