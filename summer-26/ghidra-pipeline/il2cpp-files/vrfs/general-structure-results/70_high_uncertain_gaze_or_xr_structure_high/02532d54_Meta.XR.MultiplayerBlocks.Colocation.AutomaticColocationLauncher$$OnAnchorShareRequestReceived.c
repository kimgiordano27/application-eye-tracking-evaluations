/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$OnAnchorShareRequestReceived
ENTRY_POINT: 02532d54
PROGRAM: vrfs-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__OnAnchorShareRequestReceived(void)

{
  int iVar1;
  byte bVar2;
  long *plVar3;
  long unaff_x19;
  int iVar4;
  int unaff_w22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  float fVar5;
  
  iVar4 = 0;
  do {
    if ((*(long *)(unaff_x19 + 0x128) == 0) ||
       (plVar3 = (long *)System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                                   (*(long *)(unaff_x19 + 0x128),iVar4,*unaff_x23),
       plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if ((int)plVar3[2] == 0) {
      bVar2 = *(byte *)(*unaff_x24 + 300);
      if ((*(byte *)(*plVar3 + 300) < bVar2) ||
         (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170(plVar3);
      }
      fVar5 = *(float *)(plVar3 + 0x14);
      iVar1 = *(int *)((long)plVar3 + 0xa4);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      FUN_04667970(fVar5 * (float)iVar1,plVar3,0,3,0);
      *(undefined1 *)((long)plVar3 + 0x2d) = 1;
    }
    iVar4 = iVar4 + 1;
    if (unaff_w22 == iVar4) {
      return 1;
    }
  } while( true );
}


