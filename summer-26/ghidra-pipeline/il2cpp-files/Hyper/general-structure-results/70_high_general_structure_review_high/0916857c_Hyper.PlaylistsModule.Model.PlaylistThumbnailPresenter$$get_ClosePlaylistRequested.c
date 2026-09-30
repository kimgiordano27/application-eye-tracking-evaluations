/*
FUNCTION_NAME: Hyper.PlaylistsModule.Model.PlaylistThumbnailPresenter$$get_ClosePlaylistRequested
ENTRY_POINT: 0916857c
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Hyper_PlaylistsModule_Model_PlaylistThumbnailPresenter__get_ClosePlaylistRequested
               (long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  int unaff_w20;
  undefined8 *unaff_x22;
  long *unaff_x23;
  ulong unaff_x24;
  
  do {
    if ((param_1 == 0) ||
       (plVar1 = (long *)FUN_06b7fba4(param_1,unaff_w20,*unaff_x22), plVar1 == (long *)0x0))
    goto LAB_091686d4;
    lVar3 = *plVar1;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
          goto LAB_091685e4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_04980e68(plVar1,*unaff_x23,4);
LAB_091685e4:
    uVar4 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    if ((uVar4 & 1) == 0) {
      if (unaff_w20 < 1) {
        if ((unaff_x24 & 1) == 0) {
          lVar3 = unaff_x19[0xd];
          if (*(int *)(*(long *)PTR_DAT_0ac09788 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          uVar4 = FUN_0a17b398(lVar3,0,0);
          if ((uVar4 & 1) != 0) {
            (**(code **)(*unaff_x19 + 0x358))();
            FUN_09168128();
          }
        }
LAB_091686ac:
        if (unaff_x19[0x18] != 0) {
          FUN_06511970(unaff_x19[0x18],*(undefined8 *)PTR_DAT_0ac58508);
          return;
        }
LAB_091686d4:
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
    }
    else {
      if (unaff_x19[0x20] == 0) goto LAB_091686d4;
      FUN_06b7fba4(unaff_x19[0x20],unaff_w20,*unaff_x22);
      (**(code **)(*unaff_x19 + 0x348))();
      FUN_09168128();
      unaff_x24 = 1;
      if (unaff_w20 < 1) goto LAB_091686ac;
    }
    unaff_w20 = unaff_w20 + -1;
    param_1 = unaff_x19[0x20];
  } while( true );
}


