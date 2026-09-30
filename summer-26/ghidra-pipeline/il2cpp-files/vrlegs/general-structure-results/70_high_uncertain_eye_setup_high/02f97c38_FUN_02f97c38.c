/*
FUNCTION_NAME: FUN_02f97c38
ENTRY_POINT: 02f97c38
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f9808c) */
/* WARNING: Removing unreachable block (ram,0x02f98188) */

undefined8 FUN_02f97c38(long param_1,long *param_2,long *param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  char local_34 [4];
  
  if ((DAT_0412adac & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d142e8);
    FUN_01ab69ac(PTR_DAT_03cbeeb0);
    FUN_01ab69ac(PTR_DAT_03cd81b0);
    FUN_01ab69ac(PTR_DAT_03d142f0);
    FUN_01ab69ac(PTR_DAT_03cbeda8);
    FUN_01ab69ac(PTR_DAT_03cc0ad8);
    FUN_01ab69ac(PTR_DAT_03d259a0);
    FUN_01ab69ac(PTR_DAT_03d259a8);
    FUN_01ab69ac(PTR_DAT_03d259b0);
    FUN_01ab69ac(PTR_DAT_03d259b8);
    FUN_01ab69ac(PTR_DAT_03d259c0);
    FUN_01ab69ac(PTR_DAT_03d259c8);
    FUN_01ab69ac(PTR_DAT_03d259d0);
    FUN_01ab69ac(PTR_DAT_03d259d8);
    FUN_01ab69ac(PTR_DAT_03d259e0);
    FUN_01ab69ac(PTR_DAT_03d259e8);
    FUN_01ab69ac(PTR_DAT_03cbec50);
    FUN_01ab69ac(PTR_DAT_03d259f0);
    DAT_0412adac = 1;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
    uVar3 = thunk_FUN_01a89e68();
    FUN_0276a44c(uVar3,0);
    uVar10 = thunk_FUN_01a6ca08(PTR_DAT_03d259f8);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar3,uVar10);
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_03cd81b0 + 0x130);
    if (bVar1 <= *(byte *)(*param_2 + 0x130)) {
      if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03cd81b0)
      {
        param_2 = (long *)0x0;
      }
      if (param_2 != (long *)0x0) {
        if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar3 = FUN_02745e48(0);
        *(undefined8 *)(param_1 + 0x10) = uVar3;
        uVar3 = (**(code **)(*param_2 + 0x1e8))(param_2,*(undefined8 *)(*param_2 + 0x1f0));
        if (param_3 != (long *)0x0) {
          lVar7 = *param_3;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          uVar10 = *(undefined8 *)PTR_DAT_03d259d8;
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_03d142f0) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_02f97e20;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_01a472ec(param_3,*(long *)PTR_DAT_03d142f0,0);
LAB_02f97e20:
          lVar7 = (*(code *)*puVar4)(param_3,uVar3,uVar10,puVar4[1]);
          if (lVar7 == 0) {
            return 0;
          }
          lVar5 = FUN_02f7a910(lVar7,0);
          if (lVar5 == 0) {
            return 0;
          }
          uVar8 = thunk_FUN_025bd1c0(lVar5,*(undefined8 *)PTR_DAT_03cbec50,0);
          if ((uVar8 & 1) != 0) {
            return 0;
          }
          uVar3 = FUN_02f7a918(lVar7,0);
          plVar6 = (long *)thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc0ad8);
          FUN_025d4bdc(plVar6,0);
          if ((plVar6 != (long *)0x0) &&
             (FUN_025d8778(plVar6,*(undefined8 *)PTR_DAT_03d259a8,lVar5,0),
             *(long *)(param_1 + 0x28) != 0)) {
            uVar10 = FUN_02f96d8c();
            FUN_025d8778(plVar6,*(undefined8 *)PTR_DAT_03d259e0,uVar10,0);
            if (*(long *)(param_1 + 0x28) != 0) {
              uVar10 = FUN_02f96de0();
              FUN_025d8778(plVar6,*(undefined8 *)PTR_DAT_03d259c0,uVar10,0);
              if (param_2[8] != 0) {
                uVar10 = FUN_02ea1b54(param_2[8],0);
                FUN_025d8778(plVar6,*(undefined8 *)PTR_DAT_03d259b8,uVar10,0);
                if (*(long *)(param_1 + 0x28) != 0) {
                  lVar7 = FUN_02f96e0c();
                  if (lVar7 != 0) {
                    if (*(long *)(param_1 + 0x28) == 0) goto LAB_02f98184;
                    uVar10 = FUN_02f96e0c();
                    FUN_025d8778(plVar6,*(undefined8 *)PTR_DAT_03d259d0,uVar10,0);
                  }
                  uVar3 = FUN_02f97ad8(param_1,lVar5,uVar3,param_2);
                  FUN_025d8778(plVar6,*(undefined8 *)PTR_DAT_03d259b0,uVar3,0);
                  if (*(long *)(param_1 + 0x28) != 0) {
                    lVar7 = FUN_02f96e38();
                    if (lVar7 != 0) {
                      if (*(long *)(param_1 + 0x28) == 0) goto LAB_02f98184;
                      uVar3 = FUN_02f96e38();
                      FUN_025d8778(plVar6,*(undefined8 *)PTR_DAT_03d259e8,uVar3,0);
                    }
                    local_34[0] = '\0';
                    FUN_027e0bd8(param_1,local_34,0);
                    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01ab6c3c();
                    }
                    lVar7 = FUN_02f96e38();
                    if (lVar7 != 0) {
                      uVar3 = FUN_03ab9aa0(*(undefined4 *)(param_1 + 0x18));
                      return uVar3;
                    }
                    if (local_34[0] != '\0') {
                      OVRManager_<>c__<InitOVRManager>b__424_0(param_1,0);
                    }
                    lVar7 = FUN_02f97598(param_1);
                    if (lVar7 != 0) {
                      uVar3 = FUN_02f97598(param_1);
                      FUN_025d8778(plVar6,*(undefined8 *)PTR_DAT_03d259a0,uVar3,0);
                    }
                    if (*(long *)(param_1 + 0x28) != 0) {
                      lVar7 = FUN_02f96db4();
                      if (lVar7 != 0) {
                        if (*(long *)(param_1 + 0x28) == 0) goto LAB_02f98184;
                        uVar3 = FUN_02f96db4();
                        FUN_025d8778(plVar6,*(undefined8 *)PTR_DAT_03d259c8,uVar3,0);
                      }
                      iVar2 = FUN_025cee48(plVar6,0);
                      FUN_025d5d20(plVar6,iVar2 + -2,0);
                      uVar3 = (**(code **)(*plVar6 + 0x168))
                                        (plVar6,*(undefined8 *)(*plVar6 + 0x170));
                      uVar10 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d142e8);
                      FUN_02f79074(uVar10,uVar3,0);
                      return uVar10;
                    }
                  }
                }
              }
            }
          }
        }
LAB_02f98184:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    }
  }
  return 0;
}


